/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *le_name;
    QLabel *label_2;
    QLineEdit *le_class;
    QLabel *label_3;
    QLineEdit *le_course;
    QLabel *label_4;
    QSpinBox *sb_score;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_add;
    QPushButton *btn_delete;
    QPushButton *btn_clear;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QComboBox *cb_class;
    QLabel *label_7;
    QComboBox *cb_course;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *te_stat;
    QSpacerItem *verticalSpacer;
    QWidget *widget_chart;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_stat;
    QPushButton *btn_trend;
    QPushButton *btn_chart;
    QPushButton *btn_export;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(914, 599);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(280, 250));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        le_name = new QLineEdit(groupBox);
        le_name->setObjectName("le_name");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, le_name);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        le_class = new QLineEdit(groupBox);
        le_class->setObjectName("le_class");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, le_class);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        le_course = new QLineEdit(groupBox);
        le_course->setObjectName("le_course");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, le_course);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        sb_score = new QSpinBox(groupBox);
        sb_score->setObjectName("sb_score");
        sb_score->setMaximum(100);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, sb_score);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCalendarPopup(true);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, dateEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_add = new QPushButton(groupBox);
        btn_add->setObjectName("btn_add");

        horizontalLayout->addWidget(btn_add);

        btn_delete = new QPushButton(groupBox);
        btn_delete->setObjectName("btn_delete");

        horizontalLayout->addWidget(btn_delete);

        btn_clear = new QPushButton(groupBox);
        btn_clear->setObjectName("btn_clear");

        horizontalLayout->addWidget(btn_clear);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 2, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMinimumSize(QSize(280, 100));
        groupBox_2->setMaximumSize(QSize(16777215, 16777215));
        groupBox_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        widget = new QWidget(groupBox_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 261, 59));
        formLayout_2 = new QFormLayout(widget);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_6);

        cb_class = new QComboBox(widget);
        cb_class->setObjectName("cb_class");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, cb_class);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label_7);

        cb_course = new QComboBox(widget);
        cb_course->setObjectName("cb_course");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, cb_course);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        te_stat = new QTextEdit(centralwidget);
        te_stat->setObjectName("te_stat");
        te_stat->setMinimumSize(QSize(200, 0));
        te_stat->setReadOnly(true);

        verticalLayout_3->addWidget(te_stat);

        verticalSpacer = new QSpacerItem(197, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        widget_chart = new QWidget(centralwidget);
        widget_chart->setObjectName("widget_chart");
        widget_chart->setMinimumSize(QSize(200, 200));

        verticalLayout_3->addWidget(widget_chart);


        gridLayout->addLayout(verticalLayout_3, 0, 4, 3, 1);

        horizontalSpacer = new QSpacerItem(83, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_stat = new QPushButton(centralwidget);
        btn_stat->setObjectName("btn_stat");

        verticalLayout_2->addWidget(btn_stat);

        btn_trend = new QPushButton(centralwidget);
        btn_trend->setObjectName("btn_trend");

        verticalLayout_2->addWidget(btn_trend);

        btn_chart = new QPushButton(centralwidget);
        btn_chart->setObjectName("btn_chart");

        verticalLayout_2->addWidget(btn_chart);

        btn_export = new QPushButton(centralwidget);
        btn_export->setObjectName("btn_export");

        verticalLayout_2->addWidget(btn_export);


        gridLayout->addLayout(verticalLayout_2, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(82, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);
        tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(tableView, 2, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\346\225\260\346\215\256\345\275\225\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\350\200\203\350\257\225\346\227\266\351\227\264\357\274\232", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy-MM-dd", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\210\220\347\273\251", nullptr));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\350\276\223\345\205\245", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247/\350\257\276\347\250\213\347\255\233\351\200\211", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\357\274\232", nullptr));
        btn_stat->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\347\273\237\350\256\241\345\210\206\346\236\220", nullptr));
        btn_trend->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\350\266\213\345\212\277\346\212\230\347\272\277\345\233\276", nullptr));
        btn_chart->setText(QCoreApplication::translate("MainWindow", "\346\210\220\347\273\251\345\215\240\346\257\224\351\245\274\345\233\276", nullptr));
        btn_export->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\346\210\220\347\273\251\346\212\245\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
