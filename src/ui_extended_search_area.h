/********************************************************************************
** Form generated from reading UI file 'extended_search_area.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENDED_SEARCH_AREA_H
#define UI_EXTENDED_SEARCH_AREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_extended_search_area
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QLineEdit *search_name_lineedit;
    QPushButton *search_name_button;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QTreeWidget *tree_widget_search_results_main_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *search_in_patterns_checkbox;
    QCheckBox *search_in_names_checkbox;
    QCheckBox *search_in_fields_checkbox;
    QComboBox *search_in_status_combobox;
    QComboBox *search_in_type_combobox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *match_type_combobox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QComboBox *results_ranking_combobox;

    void setupUi(QWidget *extended_search_area)
    {
        if (extended_search_area->objectName().isEmpty())
            extended_search_area->setObjectName(QStringLiteral("extended_search_area"));
        extended_search_area->resize(370, 365);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(extended_search_area->sizePolicy().hasHeightForWidth());
        extended_search_area->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(extended_search_area);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(extended_search_area);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        search_name_lineedit = new QLineEdit(groupBox_2);
        search_name_lineedit->setObjectName(QStringLiteral("search_name_lineedit"));

        gridLayout_8->addWidget(search_name_lineedit, 0, 0, 1, 1);

        search_name_button = new QPushButton(groupBox_2);
        search_name_button->setObjectName(QStringLiteral("search_name_button"));

        gridLayout_8->addWidget(search_name_button, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tree_widget_search_results_main_2 = new QTreeWidget(groupBox_5);
        tree_widget_search_results_main_2->setObjectName(QStringLiteral("tree_widget_search_results_main_2"));

        gridLayout_7->addWidget(tree_widget_search_results_main_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        search_in_patterns_checkbox = new QCheckBox(groupBox);
        search_in_patterns_checkbox->setObjectName(QStringLiteral("search_in_patterns_checkbox"));

        gridLayout->addWidget(search_in_patterns_checkbox, 0, 0, 1, 1);

        search_in_names_checkbox = new QCheckBox(groupBox);
        search_in_names_checkbox->setObjectName(QStringLiteral("search_in_names_checkbox"));

        gridLayout->addWidget(search_in_names_checkbox, 1, 0, 1, 2);

        search_in_fields_checkbox = new QCheckBox(groupBox);
        search_in_fields_checkbox->setObjectName(QStringLiteral("search_in_fields_checkbox"));

        gridLayout->addWidget(search_in_fields_checkbox, 2, 0, 1, 2);

        search_in_status_combobox = new QComboBox(groupBox);
        search_in_status_combobox->setObjectName(QStringLiteral("search_in_status_combobox"));

        gridLayout->addWidget(search_in_status_combobox, 3, 0, 1, 1);

        search_in_type_combobox = new QComboBox(groupBox);
        search_in_type_combobox->setObjectName(QStringLiteral("search_in_type_combobox"));

        gridLayout->addWidget(search_in_type_combobox, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        match_type_combobox = new QComboBox(groupBox_3);
        match_type_combobox->setObjectName(QStringLiteral("match_type_combobox"));

        gridLayout_2->addWidget(match_type_combobox, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        results_ranking_combobox = new QComboBox(groupBox_4);
        results_ranking_combobox->setObjectName(QStringLiteral("results_ranking_combobox"));

        gridLayout_3->addWidget(results_ranking_combobox, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_4, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(extended_search_area);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(extended_search_area);
    } // setupUi

    void retranslateUi(QWidget *extended_search_area)
    {
        extended_search_area->setWindowTitle(QApplication::translate("extended_search_area", "Form", 0));
        groupBox_2->setTitle(QApplication::translate("extended_search_area", "Search for...", 0));
        search_name_button->setText(QApplication::translate("extended_search_area", "Search", 0));
        groupBox_5->setTitle(QApplication::translate("extended_search_area", "Search results", 0));
        QTreeWidgetItem *___qtreewidgetitem = tree_widget_search_results_main_2->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("extended_search_area", "1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("extended_search_area", "Search", 0));
        groupBox->setTitle(QApplication::translate("extended_search_area", "Search in...", 0));
#ifndef QT_NO_TOOLTIP
        search_in_patterns_checkbox->setToolTip(QApplication::translate("extended_search_area", "Script patterns", 0));
#endif // QT_NO_TOOLTIP
        search_in_patterns_checkbox->setText(QApplication::translate("extended_search_area", "Patterns", 0));
#ifndef QT_NO_TOOLTIP
        search_in_names_checkbox->setToolTip(QApplication::translate("extended_search_area", "Script names", 0));
#endif // QT_NO_TOOLTIP
        search_in_names_checkbox->setText(QApplication::translate("extended_search_area", "Names", 0));
#ifndef QT_NO_TOOLTIP
        search_in_fields_checkbox->setToolTip(QApplication::translate("extended_search_area", "Script fields (where you write the code for your aliases/triggers and such)", 0));
#endif // QT_NO_TOOLTIP
        search_in_fields_checkbox->setText(QApplication::translate("extended_search_area", "Scripts", 0));
        search_in_status_combobox->clear();
        search_in_status_combobox->insertItems(0, QStringList()
         << QApplication::translate("extended_search_area", "Status", 0)
         << QApplication::translate("extended_search_area", "Active & inactive scripts", 0)
         << QApplication::translate("extended_search_area", "Only active scripts", 0)
         << QApplication::translate("extended_search_area", "Only non-active scripts", 0)
        );
        search_in_type_combobox->clear();
        search_in_type_combobox->insertItems(0, QStringList()
         << QApplication::translate("extended_search_area", "Type", 0)
         << QApplication::translate("extended_search_area", "All scripts", 0)
         << QApplication::translate("extended_search_area", "Triggers only", 0)
         << QApplication::translate("extended_search_area", "Aliases only", 0)
         << QApplication::translate("extended_search_area", "Timers only", 0)
         << QApplication::translate("extended_search_area", "Keybindings only", 0)
        );
        groupBox_3->setTitle(QApplication::translate("extended_search_area", "Match type", 0));
        label->setText(QApplication::translate("extended_search_area", "Match type:", 0));
        match_type_combobox->clear();
        match_type_combobox->insertItems(0, QStringList()
         << QApplication::translate("extended_search_area", "Contains", 0)
         << QApplication::translate("extended_search_area", "Exact", 0)
         << QApplication::translate("extended_search_area", "Regex", 0)
         << QApplication::translate("extended_search_area", "Fires trigger pattern", 0)
         << QApplication::translate("extended_search_area", "Fires alias pattern", 0)
        );
        groupBox_4->setTitle(QApplication::translate("extended_search_area", "Rank by", 0));
        label_2->setText(QApplication::translate("extended_search_area", "Rank results by:", 0));
        results_ranking_combobox->clear();
        results_ranking_combobox->insertItems(0, QStringList()
         << QApplication::translate("extended_search_area", "Most relevant", 0)
         << QApplication::translate("extended_search_area", "First match", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("extended_search_area", "Search options", 0));
    } // retranslateUi

};

namespace Ui {
    class extended_search_area: public Ui_extended_search_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENDED_SEARCH_AREA_H
