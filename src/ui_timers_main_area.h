/********************************************************************************
** Form generated from reading UI file 'timers_main_area.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMERS_MAIN_AREA_H
#define UI_TIMERS_MAIN_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timers_main_area
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_timer_name;
    QLineEdit *lineEdit_command;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTimeEdit *timeEdit_hours;
    QLabel *label_2;
    QTimeEdit *timeEdit_minutes;
    QLabel *label_6;
    QTimeEdit *timeEdit_seconds;
    QLabel *label_7;
    QTimeEdit *timeEdit_msecs;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;

    void setupUi(QWidget *timers_main_area)
    {
        if (timers_main_area->objectName().isEmpty())
            timers_main_area->setObjectName(QStringLiteral("timers_main_area"));
        timers_main_area->resize(656, 115);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timers_main_area->sizePolicy().hasHeightForWidth());
        timers_main_area->setSizePolicy(sizePolicy);
        timers_main_area->setMinimumSize(QSize(0, 115));
        timers_main_area->setMaximumSize(QSize(16777215, 115));
        gridLayout = new QGridLayout(timers_main_area);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 0, 0, 0);
        label_5 = new QLabel(timers_main_area);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 2, 2);

        lineEdit_timer_name = new QLineEdit(timers_main_area);
        lineEdit_timer_name->setObjectName(QStringLiteral("lineEdit_timer_name"));

        gridLayout->addWidget(lineEdit_timer_name, 0, 2, 2, 1);

        lineEdit_command = new QLineEdit(timers_main_area);
        lineEdit_command->setObjectName(QStringLiteral("lineEdit_command"));

        gridLayout->addWidget(lineEdit_command, 2, 2, 1, 1);

        widget = new QWidget(timers_main_area);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 61));
        widget->setMaximumSize(QSize(16777215, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(80, 16777215));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        timeEdit_hours = new QTimeEdit(widget);
        timeEdit_hours->setObjectName(QStringLiteral("timeEdit_hours"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(timeEdit_hours->sizePolicy().hasHeightForWidth());
        timeEdit_hours->setSizePolicy(sizePolicy1);
        timeEdit_hours->setMinimumSize(QSize(60, 40));
        timeEdit_hours->setMaximumSize(QSize(60, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 234, 218, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(244, 244, 244, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        timeEdit_hours->setPalette(palette);
        QFont font1;
        font1.setPointSize(30);
        timeEdit_hours->setFont(font1);
        timeEdit_hours->setAutoFillBackground(true);
        timeEdit_hours->setFrame(false);
        timeEdit_hours->setAlignment(Qt::AlignCenter);
        timeEdit_hours->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_hours->setAccelerated(false);
        timeEdit_hours->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        timeEdit_hours->setCurrentSection(QDateTimeEdit::HourSection);

        horizontalLayout->addWidget(timeEdit_hours);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(80, 16777215));
        QFont font2;
        font2.setPointSize(40);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label_2->setFont(font2);

        horizontalLayout->addWidget(label_2);

        timeEdit_minutes = new QTimeEdit(widget);
        timeEdit_minutes->setObjectName(QStringLiteral("timeEdit_minutes"));
        sizePolicy1.setHeightForWidth(timeEdit_minutes->sizePolicy().hasHeightForWidth());
        timeEdit_minutes->setSizePolicy(sizePolicy1);
        timeEdit_minutes->setMinimumSize(QSize(60, 40));
        timeEdit_minutes->setMaximumSize(QSize(60, 16777215));
        QPalette palette1;
        QBrush brush2(QColor(255, 254, 215, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        timeEdit_minutes->setPalette(palette1);
        timeEdit_minutes->setFont(font1);
        timeEdit_minutes->setAutoFillBackground(true);
        timeEdit_minutes->setFrame(false);
        timeEdit_minutes->setAlignment(Qt::AlignCenter);
        timeEdit_minutes->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_minutes->setAccelerated(true);
        timeEdit_minutes->setCurrentSection(QDateTimeEdit::MinuteSection);

        horizontalLayout->addWidget(timeEdit_minutes);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(80, 16777215));
        label_6->setFont(font2);

        horizontalLayout->addWidget(label_6);

        timeEdit_seconds = new QTimeEdit(widget);
        timeEdit_seconds->setObjectName(QStringLiteral("timeEdit_seconds"));
        sizePolicy1.setHeightForWidth(timeEdit_seconds->sizePolicy().hasHeightForWidth());
        timeEdit_seconds->setSizePolicy(sizePolicy1);
        timeEdit_seconds->setMinimumSize(QSize(60, 40));
        timeEdit_seconds->setMaximumSize(QSize(60, 16777215));
        QPalette palette2;
        QBrush brush3(QColor(232, 255, 231, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        timeEdit_seconds->setPalette(palette2);
        timeEdit_seconds->setFont(font1);
        timeEdit_seconds->setAutoFillBackground(true);
        timeEdit_seconds->setFrame(false);
        timeEdit_seconds->setAlignment(Qt::AlignCenter);
        timeEdit_seconds->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_seconds->setAccelerated(true);
        timeEdit_seconds->setCurrentSection(QDateTimeEdit::SecondSection);

        horizontalLayout->addWidget(timeEdit_seconds);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(80, 16777215));
        label_7->setFont(font2);

        horizontalLayout->addWidget(label_7);

        timeEdit_msecs = new QTimeEdit(widget);
        timeEdit_msecs->setObjectName(QStringLiteral("timeEdit_msecs"));
        sizePolicy1.setHeightForWidth(timeEdit_msecs->sizePolicy().hasHeightForWidth());
        timeEdit_msecs->setSizePolicy(sizePolicy1);
        timeEdit_msecs->setMinimumSize(QSize(110, 40));
        timeEdit_msecs->setMaximumSize(QSize(110, 16777215));
        QPalette palette3;
        QBrush brush4(QColor(255, 230, 232, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        timeEdit_msecs->setPalette(palette3);
        timeEdit_msecs->setFont(font1);
        timeEdit_msecs->setAutoFillBackground(true);
        timeEdit_msecs->setFrame(false);
        timeEdit_msecs->setAlignment(Qt::AlignCenter);
        timeEdit_msecs->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_msecs->setAccelerated(true);
        timeEdit_msecs->setCurrentSection(QDateTimeEdit::MSecSection);

        horizontalLayout->addWidget(timeEdit_msecs);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(widget, 3, 0, 1, 3);

        label_4 = new QLabel(timers_main_area);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setPointSize(9);
        label_4->setFont(font3);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);


        retranslateUi(timers_main_area);

        QMetaObject::connectSlotsByName(timers_main_area);
    } // setupUi

    void retranslateUi(QWidget *timers_main_area)
    {
        timers_main_area->setWindowTitle(QApplication::translate("timers_main_area", "Form", 0));
        label_5->setText(QApplication::translate("timers_main_area", "Timer name:", 0));
        label->setText(QApplication::translate("timers_main_area", "Time:", 0));
#ifndef QT_NO_TOOLTIP
        timeEdit_hours->setToolTip(QApplication::translate("timers_main_area", "<html><head/><body><p>The <span style=\" font-weight:600;\">hour</span> interval that the timer will go off at</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        timeEdit_hours->setDisplayFormat(QApplication::translate("timers_main_area", "h", 0));
        label_2->setText(QApplication::translate("timers_main_area", ":", 0));
#ifndef QT_NO_TOOLTIP
        timeEdit_minutes->setToolTip(QApplication::translate("timers_main_area", "<html><head/><body><p>The <span style=\" font-weight:600;\">minute</span> interval that the timer will go off at</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        timeEdit_minutes->setDisplayFormat(QApplication::translate("timers_main_area", "m", 0));
        label_6->setText(QApplication::translate("timers_main_area", ":", 0));
#ifndef QT_NO_TOOLTIP
        timeEdit_seconds->setToolTip(QApplication::translate("timers_main_area", "<html><head/><body><p>The <span style=\" font-weight:600;\">second</span> interval that the timer will go off at</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        timeEdit_seconds->setWhatsThis(QApplication::translate("timers_main_area", "<html><head/><body><p>The <span style=\" font-weight:600;\">second</span> interval that the timer will go off at</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        timeEdit_seconds->setDisplayFormat(QApplication::translate("timers_main_area", "s", 0));
        label_7->setText(QApplication::translate("timers_main_area", ".", 0));
#ifndef QT_NO_TOOLTIP
        timeEdit_msecs->setToolTip(QApplication::translate("timers_main_area", "<html><head/><body><p>The <span style=\" font-weight:600;\">milisecond</span> interval that the timer will go off at (1000 miliseconds = 1 second)</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        timeEdit_msecs->setWhatsThis(QApplication::translate("timers_main_area", "<html><head/><body><p>The <span style=\" font-weight:600;\">milisecond</span> interval that the timer will go off at (1000 miliseconds = 1 second)</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        timeEdit_msecs->setDisplayFormat(QApplication::translate("timers_main_area", "z", 0));
        label_3->setText(QApplication::translate("timers_main_area", "<html><head/><body><p>(hours <span style=\" font-weight:600;\">:</span> minutes <span style=\" font-weight:600;\">:</span> seconds <span style=\" font-weight:600;\">:</span> miliseconds)</p></body></html>", 0));
        label_4->setText(QApplication::translate("timers_main_area", "Command:", 0));
    } // retranslateUi

};

namespace Ui {
    class timers_main_area: public Ui_timers_main_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMERS_MAIN_AREA_H
