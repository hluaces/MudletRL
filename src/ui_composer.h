/********************************************************************************
** Form generated from reading UI file 'composer.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPOSER_H
#define UI_COMPOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_composer
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *titel;
    QPlainTextEdit *edit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *saveButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *composer)
    {
        if (composer->objectName().isEmpty())
            composer->setObjectName(QStringLiteral("composer"));
        composer->resize(567, 412);
        centralwidget = new QWidget(composer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titel = new QLineEdit(centralwidget);
        titel->setObjectName(QStringLiteral("titel"));
        QPalette palette;
        QBrush brush(QColor(255, 241, 199, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        titel->setPalette(palette);
        titel->setAutoFillBackground(true);
        titel->setAlignment(Qt::AlignCenter);
        titel->setReadOnly(true);

        verticalLayout->addWidget(titel);

        edit = new QPlainTextEdit(centralwidget);
        edit->setObjectName(QStringLiteral("edit"));

        verticalLayout->addWidget(edit);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(375, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(cancelButton);

        saveButton = new QPushButton(widget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        sizePolicy1.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(saveButton);


        verticalLayout->addWidget(widget);

        composer->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(composer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        composer->setStatusBar(statusbar);
        QWidget::setTabOrder(edit, saveButton);
        QWidget::setTabOrder(saveButton, cancelButton);
        QWidget::setTabOrder(cancelButton, titel);

        retranslateUi(composer);

        QMetaObject::connectSlotsByName(composer);
    } // setupUi

    void retranslateUi(QMainWindow *composer)
    {
        composer->setWindowTitle(QApplication::translate("composer", "News & Message Composer", 0));
        cancelButton->setText(QApplication::translate("composer", "Cancel", 0));
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("composer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Save (<span style=\" color:#565656;\">Shift+Tab</span>)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        saveButton->setText(QApplication::translate("composer", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class composer: public Ui_composer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPOSER_H
