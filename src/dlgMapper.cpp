/***************************************************************************
 *   Copyright (C) 2008-2013 by Heiko Koehn - KoehnHeiko@googlemail.com    *
 *   Copyright (C) 2014 by Ahmed Charles - acharles@outlook.com            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#include "dlgMapper.h"


#include "Host.h"
#include "TConsole.h"
#include "TEvent.h"
#include "TMap.h"
#include "TRoom.h"
#include "TRoomDB.h"

#include "pre_guard.h"
#include <QListWidget>
#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QProgressDialog>
#include "post_guard.h"

// Zoilder 07/04/2015: Include para permitir recargar el dock del mapa una vez descargado éste.
#include "mudlet.h"
// Zoilder 13/05/2015: Includes para el descompresor de zip.
#include <QtUiTools>
#include "zip.h"
#include "zipconf.h"

dlgMapper::dlgMapper( QWidget * parent, Host * pH, TMap * pM )
: QWidget( parent )
, mpMap( pM )
, mpHost( pH )
{
    setupUi(this);

    glWidget->mpMap = pM;
    mp2dMap->mpMap = pM;
    mp2dMap->mpHost = pH;
    QMapIterator<int, QString> it( mpMap->mpRoomDB->getAreaNamesMap() );
    //sort them alphabetically (case sensitive)
    QMap <QString, QString> areaNames;
    while( it.hasNext() )
    {
        it.next();
        QString name = it.value();
        areaNames.insert(name.toLower(), name);
    }
    //areaNames.sort();
    QMapIterator<QString, QString> areaIt( areaNames );
    while( areaIt.hasNext() )
    {
        areaIt.next();
        showArea->addItem( areaIt.value() );
    }
    bubbles->setChecked( mpHost->mBubbleMode );
    mp2dMap->mBubbleMode = mpHost->mBubbleMode;
    d3buttons->setVisible(false);
    roomSize->setValue(mpHost->mRoomSize*10);
    lineSize->setValue(mpHost->mLineSize);
    showInfo->setChecked( mpHost->mShowInfo );
    mp2dMap->mShowInfo = mpHost->mShowInfo;

    showRoomIDs->setChecked( mpHost->mShowRoomID );
    mp2dMap->mShowRoomID = mpHost->mShowRoomID;

    panel->setVisible(mpHost->mShowPanel);
    //searchList->setSelectionMode( QAbstractItemView::SingleSelection );
    //connect(roomID, SIGNAL(returnPressed()), this, SLOT(goRoom()));
    connect(bubbles, SIGNAL(clicked()), this, SLOT(slot_bubbles()));
    connect(showInfo, SIGNAL(clicked()), this, SLOT(slot_info()));
    connect(ortho, SIGNAL(pressed()), glWidget, SLOT(fullView()));
    connect(singleLevel, SIGNAL(pressed()), glWidget, SLOT(singleView()));
    connect(increaseTop, SIGNAL(pressed()), glWidget, SLOT(increaseTop()));
    connect(increaseBottom, SIGNAL(pressed()), glWidget, SLOT(increaseBottom()));
    connect(reduceTop, SIGNAL(pressed()), glWidget, SLOT(reduceTop()));
    connect(reduceBottom, SIGNAL(pressed()), glWidget, SLOT(reduceBottom()));
    //connect(searchList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(choseRoom(QListWidgetItem*)));
    connect(shiftZup, SIGNAL(pressed()), mp2dMap, SLOT(shiftZup()));
    connect(shiftZdown, SIGNAL(pressed()), mp2dMap, SLOT(shiftZdown()));
    connect(shiftLeft, SIGNAL(pressed()), mp2dMap, SLOT(shiftLeft()));
    connect(shiftRight, SIGNAL(pressed()), mp2dMap, SLOT(shiftRight()));
    connect(shiftUp, SIGNAL(pressed()), mp2dMap, SLOT(shiftUp()));
    connect(shiftDown, SIGNAL(pressed()), mp2dMap, SLOT(shiftDown()));

    connect(shiftZup, SIGNAL(pressed()), glWidget, SLOT(shiftZup()));
    connect(shiftZdown, SIGNAL(pressed()), glWidget, SLOT(shiftZdown()));
    connect(shiftLeft, SIGNAL(pressed()), glWidget, SLOT(shiftLeft()));
    connect(shiftRight, SIGNAL(pressed()), glWidget, SLOT(shiftRight()));
    connect(shiftUp, SIGNAL(pressed()), glWidget, SLOT(shiftUp()));
    connect(shiftDown, SIGNAL(pressed()), glWidget, SLOT(shiftDown()));
    connect(showInfo, SIGNAL(clicked()), glWidget, SLOT(showInfo()));
    connect(showArea, SIGNAL(activated(QString)), mp2dMap, SLOT(switchArea(QString)));
    connect(showArea, SIGNAL(activated(QString)), glWidget, SLOT(showArea(QString)));
    connect(defaultView, SIGNAL(pressed()), glWidget, SLOT(defaultView()));
    connect(dim2,SIGNAL(pressed()), this, SLOT(show2dView()));
    connect(sideView, SIGNAL(pressed()), glWidget, SLOT(sideView()));
    connect(topView, SIGNAL(pressed()), glWidget, SLOT(topView()));
    connect(togglePanel, SIGNAL(pressed()), this, SLOT(slot_togglePanel()));
    connect(lineSize, SIGNAL(valueChanged(int)), this, SLOT(slot_lineSize(int)));
    connect(roomSize, SIGNAL(valueChanged(int)), this, SLOT(slot_roomSize(int)));
    connect(scale, SIGNAL(valueChanged(int)), glWidget, SLOT(setScale(int)));
    connect(xRot, SIGNAL(valueChanged(int)), glWidget, SLOT(setXRotation(int)));
    connect(yRot, SIGNAL(valueChanged(int)), glWidget, SLOT(setYRotation(int)));
    connect(zRot, SIGNAL(valueChanged(int)), glWidget, SLOT(setZRotation(int)));
    mpDownloader = new QNetworkAccessManager( this );
    connect(mpDownloader, SIGNAL(finished(QNetworkReply*)),this, SLOT(replyFinished(QNetworkReply*)));
    connect(showRoomIDs, SIGNAL(stateChanged(int)), this, SLOT(slot_toggleShowRoomIDs(int)));
    mp2dMap->mFontHeight = QFontMetrics( mpHost->mDisplayFont ).height();
    glWidget->hide();
    mpMap->customEnvColors[257] = mpHost->mRed_2;
    mpMap->customEnvColors[258] = mpHost->mGreen_2;
    mpMap->customEnvColors[259] = mpHost->mYellow_2;
    mpMap->customEnvColors[260] = mpHost->mBlue_2;
    mpMap->customEnvColors[261] = mpHost->mMagenta_2;
    mpMap->customEnvColors[262] = mpHost->mCyan_2;
    mpMap->customEnvColors[263] = mpHost->mWhite_2;
    mpMap->customEnvColors[264] = mpHost->mBlack_2;
    mpMap->customEnvColors[265] = mpHost->mLightRed_2;
    mpMap->customEnvColors[266] = mpHost->mLightGreen_2;
    mpMap->customEnvColors[267] = mpHost->mLightYellow_2;
    mpMap->customEnvColors[268] = mpHost->mLightBlue_2;
    mpMap->customEnvColors[269] = mpHost->mLightMagenta_2;
    mpMap->customEnvColors[270] = mpHost->mLightCyan_2;
    mpMap->customEnvColors[271] = mpHost->mLightWhite_2;
    mpMap->customEnvColors[272] = mpHost->mLightBlack_2;
    qDebug()<<"dlgMapper constructor -> call T2DMap::init()";
    mp2dMap->init();
}

void dlgMapper::updateAreaComboBox()
{
    QMapIterator<int, QString> it( mpMap->mpRoomDB->getAreaNamesMap() );
    //sort them alphabetically (case sensitive)
    QMap <QString, QString> areaNames;
    while( it.hasNext() )
    {
        it.next();
        QString name = it.value();
        areaNames.insert(name.toLower(), name);
    }
    //areaNames.sort();
    QMapIterator<QString, QString> areaIt( areaNames );
    showArea->clear();
    while( areaIt.hasNext() )
    {
        areaIt.next();
        showArea->addItem( areaIt.value() );
    }
}

void dlgMapper::slot_toggleShowRoomIDs(int s)
{
    if( s == Qt::Checked )
        mp2dMap->mShowRoomID = true;
    else
        mp2dMap->mShowRoomID = false;
    mp2dMap->mpHost->mShowRoomID = mp2dMap->mShowRoomID;
    mp2dMap->update();
}

void dlgMapper::slot_toggleStrongHighlight( int v )
{
    mpHost->mMapStrongHighlight = v == Qt::Checked ? true : false;
    mp2dMap->update();
}

void dlgMapper::slot_togglePanel()
{
    panel->setVisible(!panel->isVisible());
    mpHost->mShowPanel = panel->isVisible();
}

void dlgMapper::show2dView()
{
    glWidget->setVisible(!glWidget->isVisible());
    mp2dMap->setVisible(!mp2dMap->isVisible());
    if(glWidget->isVisible())
        d3buttons->setVisible(true);
    else
        d3buttons->setVisible(false);

}

void dlgMapper::downloadMap()
{
    QString url = mpHost->mUrl;

    // Zoilder 06/04/2015: Reinos de leyenda usa una ruta distinta para su mapa.
    if(url.toLower().contains( "reinosdeleyenda.es") ||
       url.toLower().contains( "rlmud.org"))
        url = QString("http://mudlet.reinosdeleyenda.es/Mapa_Mudlet.zip");
    else{
        url.prepend("http://www.");
        url.append("/maps/map.xml");
    }
    //qDebug()<<"DOWNLOADING:"<<url;
    mpReply = mpDownloader->get( QNetworkRequest( QUrl( url ) ) );
    mpProgressDialog = new QProgressDialog("Downloading the map ...", "Abort", 0, 4000000);
    connect(mpReply, SIGNAL(downloadProgress( qint64, qint64 )), this, SLOT(setDownloadProgress(qint64,qint64)));
    connect(mpProgressDialog, SIGNAL(canceled()), this, SLOT(cancel()));
    mpProgressDialog->show();
}

void dlgMapper::setDownloadProgress( qint64 got, qint64 tot )
{
    mpProgressDialog->setRange(0, static_cast<int>(tot) );
    mpProgressDialog->setValue(static_cast<int>(got));
}

void dlgMapper::cancel()
{
    qDebug()<<"download was cancelled";
    // Zoilder 06/04/2015: Comentado el código, pues cerrarlo así hará que se relance la señal 'cancel'.
    //mpProgressDialog->close();
    mpReply->abort();
    // Zoilder 07/04/2015: Se cancela el diálogo, por lo que se cerrará.
    mpProgressDialog->cancel();
    // Zoilder 07/04/2015: Se elimina la información actual del mapeador.
    mpMap->mpMapper=NULL;
    //mpHost->mpMap->init( mpHost );
    //glWidget->updateGL();
}

#include "XMLimport.h"

void dlgMapper::replyFinished( QNetworkReply * reply )
{
    // Zoilder 13/05/2015: Mapa comprimido.
    bool mapaComprimido = false;

    // Zoilder 07/04/2015: Sólo se procesa lo siguiente si el reply finalizó correctamente.
    if(reply->error() != QNetworkReply::NoError)
        return;
    qDebug()<<"download complete!";

    // Zoilder 06/04/2015: Comentado el código, pues no es necesario cerrarlo a mano, se cierra auto.
    //mpProgressDialog->close();

    QString name;

    // Zoilder 13/05/2015: Si el mapa se descarga para reinos de leyenda, será en formato zip.
    QString url = mpHost->mUrl;

    // Zoilder 06/04/2015: Reinos de leyenda usa una ruta distinta para su mapa.
    if(url.toLower().contains( "reinosdeleyenda.es") ||
       url.toLower().contains( "rlmud.org")){
        QString _home = QDir::homePath();
        _home.append( "/.config/mudlet/profiles/" );
        _home.append( mpHost->getName() );
        name = QString( "%1/Mapa_Mudlet.zip").arg( _home );
        mapaComprimido = true;
    }
    // Zoilder 13/05/2015: Resto de muds.
    else{
        name = QDir::homePath()+"/.config/mudlet/profiles/"+mpHost->getName()+"/map.xml";
    }

    QFile file(name);
    file.open( QFile::WriteOnly );
    file.write( reply->readAll() );
    file.flush();
    file.close();

    // Zoilder 13/05/2015: Mapa comprimido. Descomprime y almacena el mapa normal.
    if(mapaComprimido){
        qDebug() << "Se ha recibido un mapa comprimido.";
        QList<QString> lista = descomprimeMapa(name);
        // Ya no necesita el fichero original descargado.
        file.remove();
        // Obtiene una lista de ficheros descomprimido, se queda con el primer fichero .dat localizado.
        if(lista.size()>0){
            foreach(QString fichero, lista){
                if(fichero.contains(".dat")){
                    name = QDir::homePath()+"/.config/mudlet/profiles/"+mpHost->getName()+"/" + fichero.toLatin1();
                    file.setFileName(name);
                    break;
                }
            }
        }
    }

    if( ! file.open(QFile::ReadOnly | QFile::Text) )
    {
        QMessageBox::warning(this, tr("Import Map Package:"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(name)
                             .arg(file.errorString()));
        return;
    }

    XMLimport reader( mpHost );
    // Zoilder 06/04/2015: Si no puede cargar el mapa como paquete (por no ser un .xml),
    //                     entonces lo cargará por la vía normal (Como si se hubiera seleccionado
    //                     manualmente el mapa desde Settings)
    if(reader.importPackage( & file )){
        mpHost->mpMap->init( mpHost );
        glWidget->updateGL();
    }
    else{
        mpHost->mpConsole->loadMap(name);
        file.remove();
        // Zoilder 07/04/2015: Se fuerza a que muestre el dock del mapa, pues ya no se
        //                     abrirá cuando no hay mapa y se le dice que lo descargue.
        if(!mpHost->mpMap->mpMapper->isVisible())
            mudlet::self()->slot_mapper();
    }

    if( mpHost->mpMap )
        if( mpHost->mpMap->mpMapper )
            mpHost->mpMap->mpMapper->updateAreaComboBox();

    TEvent mapDownloadEvent;
    mapDownloadEvent.mArgumentList.append( "sysMapDownloadEvent" );
    mapDownloadEvent.mArgumentTypeList.append(ARGUMENT_TYPE_STRING);
    mpHost->raiseEvent( mapDownloadEvent );

}

void dlgMapper::choseRoom(QListWidgetItem * pT )
{
    QString txt = pT->text();

    QHashIterator<int, TRoom *> it( mpMap->mpRoomDB->getRoomMap() );
    while( it.hasNext() )
    {
        it.next();
        int i = it.key();
        TRoom * pR = mpMap->mpRoomDB->getRoom(i);
        if( !pR ) continue;
        if( pR->name == txt )
        {
            qDebug()<<"found room id="<<i;
            mpMap->mTargetID = i;
            if( ! mpMap->findPath( mpMap->mRoomId, i ) )
            {
                QString msg = "Cannot find a path to this room.\n";
                mpHost->mpConsole->printSystemMessage(msg);
            }
            else
                mpMap->mpHost->startSpeedWalk();
            break;
        }
    }
    mpHost->mpConsole->setFocus();
}

void dlgMapper::goRoom()
{
//    QString txt = roomID->text();
//    searchList->clear();
//    int id = txt.toInt();

//    if( id != 0 && mpMap->rooms.contains( id ) )
//    {
//        mpMap->mTargetID = id;
//        if( mpMap->findPath(0,0) )
//        {
//            qDebug()<<"glwidget: starting speedwalk path length="<<mpMap->mPathList.size();
//            mpMap->mpHost->startSpeedWalk();
//        }
//        else
//        {
//            QString msg = "Cannot find a path to this room.\n";
//            mpHost->mpConsole->printSystemMessage(msg);
//        }
//    }
//    else
//    {
//        QMapIterator<int, TRoom *> it( mpMap->rooms );
//        while( it.hasNext() )
//        {
//            it.next();
//            int i = it.key();
//            if( mpMap->rooms[i]->name.contains( txt, Qt::CaseInsensitive ) )
//            {
//                qDebug()<<"inserting match:"<<i;
//                searchList->addItem( mpMap->rooms[i]->name );
//            }
//        }
//    }
//    mpHost->mpConsole->setFocus();
}


void dlgMapper::slot_roomSize(int d)
{
    float s = (float)d/10.0;
    mp2dMap->setRoomSize( s );
    mp2dMap->update();
}

void dlgMapper::slot_lineSize(int d)
{
    mp2dMap->setExitSize( d );
    mp2dMap->update();
}

void dlgMapper::slot_bubbles()
{
    mp2dMap->mBubbleMode = bubbles->isChecked();
    mp2dMap->mpHost->mBubbleMode = mp2dMap->mBubbleMode;
    mp2dMap->update();
}

void dlgMapper::slot_info()
{
    mp2dMap->mShowInfo = showInfo->isChecked();
    mp2dMap->mpHost->mShowInfo = mp2dMap->mShowInfo;
    mp2dMap->update();
}


QList<QString> dlgMapper::descomprimeMapa(QString fileName){
    QUiLoader loader;
    QDialog *mpUnzipDialog;
    QFile file(":/ui/package_manager_unpack.ui");
    file.open(QFile::ReadOnly);
    mpUnzipDialog = dynamic_cast<QDialog *>(loader.load( &file, 0 ) );
    file.close();
    QList<QString> lista;
    if( ! mpUnzipDialog ) return lista;
    QString _title = QString("Unpacking package: %1").arg(fileName);
    QString _dest = QDir::homePath()+"/.config/mudlet/profiles/"+ mpHost->getName()+"/";
    mpUnzipDialog->setWindowTitle( _title );
    mpUnzipDialog->show();
    mpUnzipDialog->raise();
    QApplication::sendPostedEvents();
    // At the moment, QuaZip is for Windows only - OSX and Linux use LuaZip as it is more commonly available
    // In the future, QuaZip will be the preferred option with LuaZip as a fallback
//        #ifndef Q_OS_WIN
//            QString _script = QString( "unzip([[%1]], [[%2]])" ).arg( fileName ).arg( _dest );
//            mLuaInterpreter.compileAndExecuteScript( _script );
//        #else
        //JlCompress::extractDir(fileName, _dest );
    int err = 0;
    //from: https://gist.github.com/mobius/1759816
    struct zip_stat zs;
    struct zip_file *zf;
//        int fd;
    long long sum;
    char buf[100];
    zip* archive = zip_open( fileName.toStdString().c_str(), 0, &err);
    if ( err != 0 )
    {
        zip_error_to_str(buf, sizeof(buf), err, errno);
        //FIXME: Tell user error
        mpUnzipDialog->close();
        mpUnzipDialog = 0;
        return lista;
    }
    for (int i=0;i<zip_get_num_entries( archive, 0 );i++ )
    {
        int zsi = zip_stat_index( archive, i, 0, &zs );
        if( zsi == 0 )
        {
            if ( zs.name[strlen( zs.name )-1] == '/' )
            {
                QDir dir = QDir( _dest );
                if ( !dir.exists( zs.name ) )
                {
                    if ( dir.mkdir( zs.name ) == false )
                    {
                        //FIXME: report error to user
                        //qDebug()<<"error creating subdirectory: "<<QString(zs.name);
                    }
                }
            }
            else
            {
                zf = zip_fopen_index( archive, i, 0 );
                if ( !zf )
                {
                    int sep = 0;
                    zip_error_get( archive, &err, &sep);
                    zip_error_to_str(buf, sizeof(buf), err, errno);
                    //FIXME: report error to user
                    mpUnzipDialog->close();
                    mpUnzipDialog = 0;
                    return lista;
                }
                QFile fd(_dest+QString(zs.name));
                fd.open(QIODevice::ReadWrite|QIODevice::Truncate);
                if ( !fd.isOpen() )
                {
                    //FIXME: report error to user qDebug()<<"error opening"<<_dest+QString(zs.name);
                    mpUnzipDialog->close();
                    mpUnzipDialog = 0;
                    return lista;
                }
                lista.push_back(zs.name);
                sum = 0;
                //HEIKO: comparison between signed and unsigned
                while( static_cast<zip_uint64_t>(sum) != zs.size )
                {
                    int len = zip_fread( zf, buf, 100 );
                    if ( len < 0 )
                    {
                        //FIXME: report error to user qDebug()<<"zip_fread error"<<len;
                        mpUnzipDialog->close();
                        mpUnzipDialog = 0;
                        return lista;
                    }
                    fd.write( buf, len );
                    sum += len;
                }
                fd.close();
                zip_fclose( zf );
            }
        }
    }
    err = zip_close( archive );
    if ( err != 0 ){
        zip_error_to_str(buf, sizeof(buf), err, errno);
        //FIXME: report error to user qDebug()<<"close file error"<<buf;
        mpUnzipDialog->close();
        mpUnzipDialog = 0;
        return lista;
    }

    mpUnzipDialog->close();
    mpUnzipDialog = 0;
    return lista;
}
