/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about_dialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *mudletTitleLabel;
    QTabWidget *tabWidget;
    QWidget *tab_mudlet;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser_mudlet;
    QWidget *tab_license;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser_license;

    void setupUi(QDialog *about_dialog)
    {
        if (about_dialog->objectName().isEmpty())
            about_dialog->setObjectName(QStringLiteral("about_dialog"));
        about_dialog->setWindowModality(Qt::NonModal);
        about_dialog->setEnabled(true);
        about_dialog->resize(780, 380);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(about_dialog->sizePolicy().hasHeightForWidth());
        about_dialog->setSizePolicy(sizePolicy);
        about_dialog->setMinimumSize(QSize(0, 380));
        about_dialog->setMaximumSize(QSize(800, 380));
        QPalette palette;
        QBrush brush(QColor(255, 254, 215, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(188, 170, 145, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        about_dialog->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(10);
        about_dialog->setFont(font);
        about_dialog->setContextMenuPolicy(Qt::PreventContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/mudlet_information.png"), QSize(), QIcon::Normal, QIcon::Off);
        about_dialog->setWindowIcon(icon);
        about_dialog->setAutoFillBackground(true);
        gridLayout = new QGridLayout(about_dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(about_dialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(320, 360));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        mudletTitleLabel = new QLabel(frame);
        mudletTitleLabel->setObjectName(QStringLiteral("mudletTitleLabel"));
        mudletTitleLabel->setGeometry(QRect(0, 0, 320, 360));
        sizePolicy.setHeightForWidth(mudletTitleLabel->sizePolicy().hasHeightForWidth());
        mudletTitleLabel->setSizePolicy(sizePolicy);
        mudletTitleLabel->setMinimumSize(QSize(320, 360));
        QFont font1;
        font1.setPointSize(15);
        mudletTitleLabel->setFont(font1);
        mudletTitleLabel->setContextMenuPolicy(Qt::NoContextMenu);
        mudletTitleLabel->setAutoFillBackground(false);
        mudletTitleLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        mudletTitleLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        tabWidget = new QTabWidget(about_dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 107, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 169, 143, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush6(QColor(255, 254, 235, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        tabWidget->setPalette(palette1);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab_mudlet = new QWidget();
        tab_mudlet->setObjectName(QStringLiteral("tab_mudlet"));
        verticalLayout_2 = new QVBoxLayout(tab_mudlet);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser_mudlet = new QTextBrowser(tab_mudlet);
        textBrowser_mudlet->setObjectName(QStringLiteral("textBrowser_mudlet"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser_mudlet->sizePolicy().hasHeightForWidth());
        textBrowser_mudlet->setSizePolicy(sizePolicy1);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        textBrowser_mudlet->setPalette(palette2);
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setPointSize(9);
        textBrowser_mudlet->setFont(font2);
        textBrowser_mudlet->setAutoFillBackground(true);
        textBrowser_mudlet->setFrameShape(QFrame::NoFrame);
        textBrowser_mudlet->setReadOnly(true);
        textBrowser_mudlet->setTextInteractionFlags(Qt::TextBrowserInteraction);
        textBrowser_mudlet->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(textBrowser_mudlet);

        tabWidget->addTab(tab_mudlet, QString());
        tab_license = new QWidget();
        tab_license->setObjectName(QStringLiteral("tab_license"));
        verticalLayout = new QVBoxLayout(tab_license);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser_license = new QTextBrowser(tab_license);
        textBrowser_license->setObjectName(QStringLiteral("textBrowser_license"));
        textBrowser_license->setFrameShape(QFrame::NoFrame);
        textBrowser_license->setReadOnly(true);
        textBrowser_license->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(textBrowser_license);

        tabWidget->addTab(tab_license, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);


        retranslateUi(about_dialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(about_dialog);
    } // setupUi

    void retranslateUi(QDialog *about_dialog)
    {
        about_dialog->setWindowTitle(QApplication::translate("about_dialog", "About Mudlet", 0));
        mudletTitleLabel->setText(QString());
        textBrowser_mudlet->setHtml(QApplication::translate("about_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; c"
                        "olor:#000000;\">Homepage at: </span><a href=\"http://mudlet.sourceforge.net\"><span style=\" font-family:'Sans Serif'; text-decoration: underline; color:#0000ff;\">mudlet.sourceforge.net</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-weight:600;\">Forums </span><span style=\" font-family:'Sans Serif'; font-weight:600; font-style:italic; color:#ff0000;\">NOW</span><span style=\" font-family:'Sans Serif'; font-weight:600;\"> at: </span><a href=\"http://forums.mudlet.org\"><span style=\" font-family:'Sans Serif'; text-decoration: underline; color:#0000ff;\">forums.mudlet.org</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">Latest release version can be found at: </span><a href=\"http://sourceforge.net/projects/mudlet/files/?source=navb"
                        "ar\"><span style=\" font-family:'Sans Serif'; text-decoration: underline; color:#0000ff;\">mudlet.sourceforge.net</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-weight:600;\">Development (Git) versions at: </span><a href=\"http://sourceforge.net/p/mudlet/code/ci/master/tree/\"><span style=\" font-family:'Sans Serif'; text-decoration: underline; color:#0000ff;\">Sourceforge(master)</span></a><span style=\" font-family:'Sans Serif';\"> and </span><a href=\"http://github.com/Mudlet\"><span style=\" font-family:'Sans Serif'; text-decoration: underline; color:#0000ff;\">Github(developers' alphas/betas)</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-weight:600;\">Bug Tracking: </span><a href=\"http://bugs.launchpad.net/mudlet\"><span style"
                        "=\" font-family:'Sans Serif'; text-decoration: underline; color:#0000ff;\">bugs.launchpad.net/mudlet</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-weight:600;\">Documentation and Help: </span><a href=\"http://mudlet.sourceforge.net/wordpress/?page_id=40\"><span style=\" font-family:'Sans Serif'; text-decoration: underline; color:#0000ff;\">Manual, Help and FAQs</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif';\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Author: </span><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Heiko K\303\266hn</span><span style="
                        "\" font-size:10pt; font-weight:600;\"> ( </span><span style=\" font-size:10pt; font-weight:600; color:#0000ff;\">KoehnHeiko@googlemail.com </span><span style=\" font-size:10pt; font-weight:600;\">) </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Credits:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Vadim Peretokin</span><span style=\" font-size:10pt; color:#000000;\"> ( </span><span style=\" font-size:10pt; color:#0000ff;\">vadim.peretokin@mudlet.org </span><span style=\" font-size:10pt; color:#000000;\">) </span><span style=\" font-family:'Sans Serif'; font-size:10pt;\">GUI design and initial feature planning. He is responsible for the project homepage and the user manual."
                        " Maintainer of the Ubuntu packages. Project management, public relations &amp; user help. He has been with the project from the very beginning and is an official spokesman of the project.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Ahmed Charles</span><span style=\" font-size:10pt; color:#000000;\"> ( </span><span style=\" font-size:10pt; color:#0000ff;\">acharles@outlook.com </span><span style=\" font-size:10pt; color:#000000;\">) </span><span style=\" font-family:'Sans Serif'; font-size:10pt;\">He has been following the project and using Mudlet for years with recent contributions to the Travis integration along with the CMake and Visual C++ build.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight"
                        ":600; text-decoration: underline; color:#bc8942;\">Stephen Hansen</span><span style=\" font-size:10pt; color:#000000;\"> ( </span><span style=\" font-family:'Bitstream Vera Sans'; font-size:10pt; color:#5500ff;\">me+mudlet@ixokai.io</span><span style=\" font-family:'Sans Serif'; font-size:10pt;\"> ) has developed the current improved MAC OSX installer. He is the current maintainer of the MAC version of Mudlet and he has contributed the database Lua api.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Chris Mitchell</span><span style=\" font-size:10pt; color:#000000;\"> ( </span><span style=\" font-size:10pt; color:#0000ff;\">chrismudlet@gmail.com </span><span style=\" font-family:'Sans Serif'; font-size:10pt;\">) has developed a shared module system that allows script packages to be shared among profiles and he has contributed som"
                        "e patches for the mapper.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Stephen Lyons</span><span style=\" font-family:'Sans Serif'; font-size:8pt;\"> ( </span><span style=\" font-family:'Sans Serif'; font-size:8pt; color:#0000ff;\">slysven@virginmedia.com</span><span style=\" font-family:'Sans Serif'; font-size:8pt;\"> ) after joining in 2013, has been poking various bits of the C++ code and GUI with a pointy stick; subsequently trying to patch over some of the holes made/found.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Bruno Bigras</span><span style=\" font-size:8pt; color:#000000;\"> ( </span><span style=\" font-size"
                        ":8pt; color:#0000ff;\">bruno@burnbox.net</span><span style=\" font-size:8pt; color:#000000;\"> ) </span><span style=\" font-family:'Sans Serif'; font-size:8pt;\">has developed our cross platform cmake build script and he has committed a number of patches.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Damian Monogue</span><span style=\" font-size:8pt; color:#000000;\"> ( </span><span style=\" font-size:8pt; color:#0000ff;\">demonnic@gmail.com )</span><span style=\" font-size:8pt; color:#000000;\"> former maintainer of the early Windows and Apple OSX packages. He also administers our server and helps the project in many ways. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underl"
                        "ine; color:#bc8942;\">Thorsten Wilms</span><span style=\" font-size:8pt;\"> ( </span><span style=\" font-size:8pt; color:#0000ff;\">t_w_@freenet.de ) </span><span style=\" font-family:'Sans Serif'; font-size:8pt;\">has designed our beautiful logo, our splash screen, the about dialog, our website, several icons and badges. Visit his homepage at </span><a href=\"http://thorwil.wordpress.com/\"><span style=\" font-family:'Sans Serif'; font-size:8pt; text-decoration: underline; color:#0000ff;\">thorwil.wordpress.com</span></a><span style=\" font-family:'Sans Serif'; font-size:8pt;\">.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Leigh Stillard</span><span style=\" font-size:8pt; color:#000000;\"> ( </span><span style=\" font-size:8pt; color:#0000ff;\">leigh.stillard@gmail.com</span><span style=\" font-size:8pt; color:#000000;\"> ) i"
                        "s the author of our windows installer. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Ben Carlsen</span><span style=\" font-size:8pt; color:#000000;\"> ( </span><span style=\" font-family:'Sans Serif'; font-size:8pt; color:#0000ff;\">arkholt@gmail.com</span><span style=\" font-family:'Sans Serif'; font-size:8pt;\"> ) has developed the first version of our MAC OSX installer. He is the former maintainer of the MAC version of Mudlet. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">John Dahlstr\303\266m</span><span style=\" font-size:8pt; color:#000000;\"> ( </span><span style=\" font-size:8pt; color:#0000ff;\">email@johndahlstrom.se</span><span style=\""
                        " font-size:8pt; color:#000000;\"> ) helped develop and debug the Lua API. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Carter Dewey</span><span style=\" font-family:'Sans Serif'; font-size:8pt;\"> ( </span><span style=\" font-family:'Sans Serif'; font-size:8pt; color:#0000ff;\">eldarerathis@gmail.com</span><span style=\" font-family:'Sans Serif'; font-size:8pt;\"> ) has submitted 3 small patches so far. Hopefully, we'll see more in the future.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Blaine von Roeder</span><span style=\" font-family:'Sans Serif'; font-size:8pt;\"> () joined in December 2009"
                        ". So far he has contributed to the Lua API, submitted small bugfix patches and has helped with release management of 1.0.5.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Ben Smith</span><span style=\" font-family:'Sans Serif'; font-size:8pt;\"> () joined in December 2009 though he's been around much longer. Promising contributions to the Lua API. He is the current Maintainer of the Lua API.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">James Younquist</span><span style=\" font-size:8pt; color:#000000;\"> ( </span><span style=\" font-size:8pt; color:#0000ff;\">daemacles@yahoo.com</span><span style=\""
                        " font-size:8pt; color:#000000;\"> ) contributed the Geyser layout manager for Mudlet in March 2010. It is written in Lua and aims at simplifying user GUI scripting. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Karsten Bock</span><span style=\" font-size:8pt; color:#000000;\"> () contributed several improvements and new features for Geyser. He is the current maintainer of Geyser.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Maksym V. Grinenko</span><span style=\" font-size:8pt; color:#000000;\"> ( </span><span style=\" font-size:8pt; color:#0000ff;\">maksym.grinenko@gmail.com</span><span style=\" font-size:8pt; color:#000"
                        "000;\"> ) work on the manual, forum help and helps with GUI design and documentation.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">Many icons are taken from the </span><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">KDE4 oxygen icon theme</span><span style=\" font-size:8pt; color:#000000;\"> at </span><a href=\"www.oxygen-icons.org\"><span style=\" font-family:'Sans Serif'; font-size:8pt; text-decoration: underline; color:#0000ff;\">www.oxygen-icons.org</span></a><span style=\" font-size:8pt; color:#000000;\"> or </span><a href=\"www.kde.org\"><span style=\" font-family:'Sans Serif'; font-size:8pt; text-decoration: underline; color:#0000ff;\">www.kde.org</span></a><span style=\" font-size:8pt; color:#000000;\"> . Most of the rest are from Thorsten Wilms, or from Stephen Lyons combining bits of Thorsten's work with the other sourc"
                        "es.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">Special thanks to </span><span style=\" font-size:8pt; font-weight:600; color:#0000ff;\">Brett Duzevich</span><span style=\" font-size:8pt; color:#000000;\"> and </span><span style=\" font-size:8pt; font-weight:600; color:#0000ff;\">Ronny Ho</span><span style=\" font-size:8pt; color:#000000;\">. They have contributed many good ideas and thus helped improve the scripting framework substantially.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">Thanks to </span><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Tomas Mecir</span><span style=\" font-size:8pt; color:#000000;\"> ( </span><span style=\" font-size:8pt; color:#0000ff;\">kmuddy@kmuddy.com</spa"
                        "n><span style=\" font-size:8pt; color:#000000;\"> ) who brought us all together and inspired us with his KMuddy project. Mudlet is using some of the telnet code he wrote for his KMuddy project ( </span><a href=\"http://www.kmuddy.com\"><span style=\" font-family:'Sans Serif'; font-size:8pt; text-decoration: underline; color:#0000ff;\">www.kmuddy.com</span></a><span style=\" font-size:8pt; color:#000000;\"> ).</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">Special thanks to </span><span style=\" font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Nick Gammon</span><span style=\" font-size:8pt; color:#000000;\"> ( </span><a href=\"http://www.gammon.com.au/mushclient/mushclient.htm\"><span style=\" font-family:'Sans Serif'; font-size:8pt; text-decoration: underline; color:#0000ff;\">www.gammon.com.au/mushclient/mushclient.htm</span></a><span style=\" fo"
                        "nt-size:8pt; color:#000000;\"> ) for giving us some valued pieces of advice.</span></p></td></tr></table></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_mudlet), QApplication::translate("about_dialog", "Mudlet", 0));
        textBrowser_license->setHtml(QApplication::translate("about_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; color:#000000;\">Mudlet has been written by Heiko K\303\266hn, KoehnHeiko@googlemail.com.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; color:#000000;\">Mudlet is published under the GPL L"
                        "icense version 2, which is reproduced below:</span></p>\n"
"<hr />\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; color:#000000;\">GNU GENERAL PUBLIC LICENSE</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Version 2, June 1991</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Copyright \302\251 1989, 1991 Free Software Foundation, Inc.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><spa"
                        "n style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">59 Temple Place, Suite 330, Boston, MA  02111-1307 USA</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Everyone is permitted to copy and distribute verbatim copies of this license document, but changing it is not allowed.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; color:#000000;\">Preamble</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">The licenses for most software are designed to take away your freedom to share and change it.  By contrast, the GNU General"
                        " Public License is intended to guarantee your freedom to share and change free software--to make sure the software is free for all its users.  This General Public License applies to most of the Free Software Foundation's software and to any other program whose authors commit to using it.  (Some other Free Software Foundation software is covered by the GNU Library General Public License instead.)  You can apply it to your programs, too.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">When we speak of free software, we are referring to freedom, not price.  Our General Public Licenses are designed to make sure that you have the freedom to distribute copies of free software (and charge for this service if you wish), that you receive source code or can get it if you want it, that you can change the software or use pieces of it in new free programs; and th"
                        "at you know you can do these things.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">To protect your rights, we need to make restrictions that forbid anyone to deny you these rights or to ask you to surrender the rights. These restrictions translate to certain responsibilities for you if you distribute copies of the software, or if you modify it.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">For example, if you distribute copies of such a program, whether gratis or for a fee, you must give the recipients all the rights that you have.  You must make sure that they, too, receive or can get the source code.  And you must show them these terms so they know their rights.</span></p>\n"
"<p styl"
                        "e=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">We protect your rights with two steps: (1) copyright the software, and (2) offer you this license which gives you legal permission to copy, distribute and/or modify the software.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Also, for each author's protection and ours, we want to make certain that everyone understands that there is no warranty for this free software.  If the software is modified by someone else and passed on, we want its recipients to know that what they have is not the original, so that any problems introduced by others will not reflect on the original authors' reputations.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Finally, any free program is threatened constantly by software patents.  We wish to avoid the danger that redistributors of a free program will individually obtain patent licenses, in effect making the program proprietary.  To prevent this, we have made it clear that any patent must be licensed for everyone's free use or not licensed at all.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">The precise terms and conditions for copying, distribution and modification follow.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; color:#000000;\">GN"
                        "U GENERAL PUBLIC LICENSE</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; color:#000000;\">TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">0. This License applies to any program or other work which contains a notice placed by the copyright holder saying it may be distributed under the terms of this General Public License.  The &quot;Program&quot;, below, refers to any such program or work, and a &quot;work based on the Program&quot; means either the Program or any derivative work under copyright law: that is to say, a work containing the Program or a portion of it, either verbatim or with modifications and/or tr"
                        "anslated into another language.  (Hereinafter, translation is included without limitation in the term &quot;modification&quot;.)  Each licensee is addressed as &quot;you&quot;.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Activities other than copying, distribution and modification are not covered by this License; they are outside its scope.  The act of running the Program is not restricted, and the output from the Program is covered only if its contents constitute a work based on the Program (independent of having been made by running the Program). Whether that is true depends on what the Program does.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">1. You may copy and distribute verbat"
                        "im copies of the Program's source code as you receive it, in any medium, provided that you conspicuously and appropriately publish on each copy an appropriate copyright notice and disclaimer of warranty; keep intact all the notices that refer to this License and to the absence of any warranty; and give any other recipients of the Program a copy of this License along with the Program.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">You may charge a fee for the physical act of transferring a copy, and you may at your option offer warranty protection in exchange for a fee.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">2. You may modify your copy or copies of the Program or any portion of it,"
                        " thus forming a work based on the Program, and copy and distribute such modifications or work under the terms of Section 1 above, provided that you also meet all of these conditions:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">a) You must cause the modified files to carry prominent notices stating that you changed the files and the date of any change.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">b) You must cause any work that you distribute or publish, that in whole or in part contains or is derived from the Program or any part thereof, to be licensed as a whole at no charge to all third parties under the terms of this License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bott"
                        "om:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">c) If the modified program normally reads commands interactively when run, you must cause it, when started running for such interactive use in the most ordinary way, to print or display an announcement including an appropriate copyright notice and a notice that there is no warranty (or else, saying that you provide a warranty) and that users may redistribute the program under these conditions, and telling the user how to view a copy of this License.  (Exception: if the Program itself is interactive but does not normally print such an announcement, your work based on the Program is not required to print an announcement.)</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">These requirements apply to th"
                        "e modified work as a whole.  If identifiable sections of that work are not derived from the Program, and can be reasonably considered independent and separate works in themselves, then this License, and its terms, do not apply to those sections when you distribute them as separate works.  But when you distribute the same sections as part of a whole which is a work based on the Program, the distribution of the whole must be on the terms of this License, whose permissions for other licensees extend to the entire whole, and thus to each and every part regardless of who wrote it.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Thus, it is not the intent of this section to claim rights or contest your rights to work written entirely by you; rather, the intent is to exercise the right to control the distribution of derivative or collective works based on t"
                        "he Program.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">In addition, mere aggregation of another work not based on the Program with the Program (or with a work based on the Program) on a volume of a storage or distribution medium does not bring the other work under the scope of this License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">3. You may copy and distribute the Program (or a work based on it, under Section 2) in object code or executable form under the terms of Sections 1 and 2 above provided that you also do one of the following:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span st"
                        "yle=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">a) Accompany it with the complete corresponding machine-readable source code, which must be distributed under the terms of Sections 1 and 2 above on a medium customarily used for software interchange; or,</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">b) Accompany it with a written offer, valid for at least three years, to give any third party, for a charge no more than your cost of physically performing source distribution, a complete machine-readable copy of the corresponding source code, to be distributed under the terms of Sections 1 and 2 above on a medium customarily used for software interchange; or,</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; fo"
                        "nt-size:9pt; color:#000000;\">c) Accompany it with the information you received as to the offer to distribute corresponding source code.  (This alternative is allowed only for noncommercial distribution and only if you received the program in object code or executable form with such an offer, in accord with Subsection b above.)</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">The source code for a work means the preferred form of the work for making modifications to it.  For an executable work, complete source code means all the source code for all modules it contains, plus any associated interface definition files, plus the scripts used to control compilation and installation of the executable.  However, as a special exception, the source code distributed need not include anything that is normally distributed (in either source or binary form) with th"
                        "e major components (compiler, kernel, and so on) of the operating system on which the executable runs, unless that component itself accompanies the executable.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">If distribution of executable or object code is made by offering access to copy from a designated place, then offering equivalent access to copy the source code from the same place counts as distribution of the source code, even though third parties are not compelled to copy the source along with the object code.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">4. You may not copy, modify, sublicense, or distribute the Program except as expressly provided under this License.  Any attempt"
                        " otherwise to copy, modify, sublicense or distribute the Program is void, and will automatically terminate your rights under this License. However, parties who have received copies, or rights, from you under this License will not have their licenses terminated so long as such parties remain in full compliance.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">5. You are not required to accept this License, since you have not signed it.  However, nothing else grants you permission to modify or distribute the Program or its derivative works.  These actions are prohibited by law if you do not accept this License.  Therefore, by modifying or distributing the Program (or any work based on the Program), you indicate your acceptance of this License to do so, and all its terms and conditions for copying, distributing or modifying the Program or works based on "
                        "it.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">6. Each time you redistribute the Program (or any work based on the Program), the recipient automatically receives a license from the original licensor to copy, distribute or modify the Program subject to these terms and conditions.  You may not impose any further restrictions on the recipients' exercise of the rights granted herein. You are not responsible for enforcing compliance by third parties to this License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">7. If, as a consequence of a court judgment or allegation of patent infringement or for any other reason (not limited to patent issues), conditions are imposed on you (whether by c"
                        "ourt order, agreement or otherwise) that contradict the conditions of this License, they do not excuse you from the conditions of this License.  If you cannot distribute so as to satisfy simultaneously your obligations under this License and any other pertinent obligations, then as a consequence you may not distribute the Program at all.  For example, if a patent license would not permit royalty-free redistribution of the Program by all those who receive copies directly or indirectly through you, then the only way you could satisfy both it and this License would be to refrain entirely from distribution of the Program.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">If any portion of this section is held invalid or unenforceable under any particular circumstance, the balance of the section is intended to apply and the section as a whole is intended to"
                        " apply in other circumstances.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">It is not the purpose of this section to induce you to infringe any patents or other property right claims or to contest validity of any such claims; this section has the sole purpose of protecting the integrity of the free software distribution system, which is implemented by public license practices.  Many people have made generous contributions to the wide range of software distributed through that system in reliance on consistent application of that system; it is up to the author/donor to decide if he or she is willing to distribute software through any other system and a licensee cannot impose that choice.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family"
                        ":'Sans Serif'; font-size:9pt; color:#000000;\">This section is intended to make thoroughly clear what is believed to be a consequence of the rest of this License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">8. If the distribution and/or use of the Program is restricted in certain countries either by patents or by copyrighted interfaces, the original copyright holder who places the Program under this License may add an explicit geographical distribution limitation excluding those countries, so that distribution is permitted only in or among countries not thus excluded.  In such case, this License incorporates the limitation as if written in the body of this License.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-"
                        "size:9pt; color:#000000;\">9. The Free Software Foundation may publish revised and/or new versions of the General Public License from time to time.  Such new versions will be similar in spirit to the present version, but may differ in detail to address new problems or concerns.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Each version is given a distinguishing version number.  If the Program specifies a version number of this License which applies to it and &quot;any later version&quot;, you have the option of following the terms and conditions either of that version or of any later version published by the Free Software Foundation.  If the Program does not specify a version number of this License, you may choose any version ever published by the Free Software Foundation.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">10. If you wish to incorporate parts of the Program into other free programs whose distribution conditions are different, write to the author to ask for permission.  For software which is copyrighted by the Free Software Foundation, write to the Free Software Foundation; we sometimes make exceptions for this.  Our decision will be guided by the two goals of preserving the free status of all derivatives of our free software and of promoting the sharing and reuse of software generally.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; color:#000000;\">NO WARRANTY</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
                        "style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM &quot;AS IS&quot; WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY A"
                        "ND/OR REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; color:#000000;\">END OF TERMS AND CONDITIONS</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; color:#000000;\">How to Apply These Terms to Y"
                        "our New Programs</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">If you develop a new program, and you want it to be of the greatest possible use to the public, the best way to achieve this is to make it free software which everyone can redistribute and change under these terms.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">To do so, attach the following notices to the program.  It is safest to attach them to the start of each source file to most effectively convey the exclusion of warranty; and each file should have at least the &quot;copyright&quot; line and a pointer to where the full notice is found.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margi"
                        "n-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">&lt;one line to give the program's name and a brief idea of what it does.&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Copyright (C) &lt;year&gt;  &lt;name of author&gt;</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">This program is free software; you can redistribute it and/or modify</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">it under the terms of the GNU General Public License as published by</spa"
                        "n></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">the Free Software Foundation; either version 2 of the License, or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">(at your option) any later version.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">This program is distributed in the hope that it will be useful,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">but WITHOUT ANY WARRANTY;"
                        " without even the implied warranty of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">GNU General Public License for more details.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">You should have received a copy of the GNU General Public License</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-siz"
                        "e:9pt; color:#000000;\">along with this program; if not, write to the Free Software</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Also add information on how to contact you by electronic and paper mail.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">If the program is interactive, make it output a short notice like this when it starts in an interactive mode:</span></p>\n"
"<p style=\" margin-top:12px; margin-b"
                        "ottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Gnomovision version 69, Copyright (C) year name of author</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Gnomovision comes with ABSOLUTELY NO WARRANTY; for details type `show w'.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">This is free software, and you are welcome to redistribute it</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">under certain conditions; type `show c' for d"
                        "etails.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">The hypothetical commands `show w' and `show c' should show the appropriate parts of the General Public License.  Of course, the commands you use may be called something other than `show w' and `show c'; they could even be mouse-clicks or menu items--whatever suits your program.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">You should also get your employer (if you work as a programmer) or your school, if any, to sign a &quot;copyright disclaimer&quot; for the program, if necessary.  Here is a sample; alter the names:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1;"
                        " text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Yoyodyne, Inc., hereby disclaims all copyright interest in the program</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">`Gnomovision' (which makes passes at compilers) written by James Hacker.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">&lt;signature of Ty Coon&gt;, 1 April 1989</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">Ty Coon, President of Vice</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-"
                        "right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#000000;\">This General Public License does not permit incorporating your program into proprietary programs.  If your program is a subroutine library, you may consider it more useful to permit linking proprietary applications with the library.  If this is what you want to do, use the GNU Library General Public License instead of this License.</span></p></td></tr></table></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_license), QApplication::translate("about_dialog", "License", 0));
    } // retranslateUi

};

namespace Ui {
    class about_dialog: public Ui_about_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
