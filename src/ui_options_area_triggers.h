/********************************************************************************
** Form generated from reading UI file 'options_area_triggers.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_AREA_TRIGGERS_H
#define UI_OPTIONS_AREA_TRIGGERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_options_area_triggers
{
public:
    QFormLayout *formLayout;

    void setupUi(QWidget *options_area_triggers)
    {
        if (options_area_triggers->objectName().isEmpty())
            options_area_triggers->setObjectName(QStringLiteral("options_area_triggers"));
        options_area_triggers->resize(501, 52);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(options_area_triggers->sizePolicy().hasHeightForWidth());
        options_area_triggers->setSizePolicy(sizePolicy);
        options_area_triggers->setMinimumSize(QSize(0, 0));
        options_area_triggers->setMaximumSize(QSize(16777215, 52));
        formLayout = new QFormLayout(options_area_triggers);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(3);
        formLayout->setVerticalSpacing(3);

        retranslateUi(options_area_triggers);

        QMetaObject::connectSlotsByName(options_area_triggers);
    } // setupUi

    void retranslateUi(QWidget *options_area_triggers)
    {
        options_area_triggers->setWindowTitle(QApplication::translate("options_area_triggers", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class options_area_triggers: public Ui_options_area_triggers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_AREA_TRIGGERS_H
