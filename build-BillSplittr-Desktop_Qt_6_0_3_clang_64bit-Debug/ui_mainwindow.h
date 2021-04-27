/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *numPeople_label;
    QLabel *numPeople;
    QVBoxLayout *verticalLayout_4;
    QLabel *total_label;
    QLabel *totalPrice;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *listName_label;
    QLabel *price_label;
    QLabel *perPerson_label;
    QScrollArea *list_scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *listInput;
    QPushButton *add_button;
    QPushButton *clearAllList_button;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *name_label;
    QLabel *pay_label;
    QScrollArea *name_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *nameInput;
    QPushButton *add_button_2;
    QPushButton *claerAllName_button;
    QPushButton *createBill_button;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(400, 600));
        MainWindow->setMaximumSize(QSize(400, 600));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background: rgb(236, 236, 236);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout_2->setSpacing(-1);
#endif
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        numPeople_label = new QLabel(centralwidget);
        numPeople_label->setObjectName(QString::fromUtf8("numPeople_label"));
        numPeople_label->setMaximumSize(QSize(16777215, 30));
        numPeople_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(numPeople_label);

        numPeople = new QLabel(centralwidget);
        numPeople->setObjectName(QString::fromUtf8("numPeople"));
        numPeople->setMaximumSize(QSize(16777215, 50));
        numPeople->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(numPeople);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout_4->setSpacing(-1);
#endif
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        total_label = new QLabel(centralwidget);
        total_label->setObjectName(QString::fromUtf8("total_label"));
        total_label->setMaximumSize(QSize(16777215, 30));
        total_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(total_label);

        totalPrice = new QLabel(centralwidget);
        totalPrice->setObjectName(QString::fromUtf8("totalPrice"));
        totalPrice->setMaximumSize(QSize(16777215, 50));
        totalPrice->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(totalPrice);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(400, 430));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget QWidget\n"
"{\n"
"	background-color: #dae1e7;\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QTabWidget::pane { \n"
"	border: none;\n"
"	top:15px; \n"
"}\n"
"\n"
"QTabBar::tab {\n"
"	width: 180px;\n"
"	height: 40px;\n"
"	padding: 5px;\n"
"	font: 18px;\n"
"	font-weight: bold;\n"
"	color: #5e5e5e;\n"
"	background: rgb(236, 236, 236);\n"
"	border: outset;\n"
"	border-radius: 1px;\n"
"	border-width: 3px;\n"
"	border-top: none;\n"
"	border-right: none;\n"
"	border-left: none;\n"
"	border-bottom-color: #bbbbbb;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"	border: outset;\n"
"	color: #0f4c75;\n"
"	border-width: 3px;\n"
"	border-top: none;\n"
"	border-right: none;\n"
"	border-left: none;\n"
"	border-bottom-color: #3282b8;\n"
"}"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        listName_label = new QLabel(tab_3);
        listName_label->setObjectName(QString::fromUtf8("listName_label"));
        listName_label->setMaximumSize(QSize(200, 100));
        listName_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));

        horizontalLayout_4->addWidget(listName_label);

        price_label = new QLabel(tab_3);
        price_label->setObjectName(QString::fromUtf8("price_label"));
        price_label->setMaximumSize(QSize(100, 100));
        price_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));

        horizontalLayout_4->addWidget(price_label);

        perPerson_label = new QLabel(tab_3);
        perPerson_label->setObjectName(QString::fromUtf8("perPerson_label"));
        perPerson_label->setMaximumSize(QSize(100, 100));
        perPerson_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));
        perPerson_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(perPerson_label);


        verticalLayout_3->addLayout(horizontalLayout_4);

        list_scrollArea = new QScrollArea(tab_3);
        list_scrollArea->setObjectName(QString::fromUtf8("list_scrollArea"));
        list_scrollArea->setMaximumSize(QSize(400, 200));
        list_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 336, 200));
        list_scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(list_scrollArea);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listInput = new QLineEdit(tab_3);
        listInput->setObjectName(QString::fromUtf8("listInput"));
        listInput->setMaximumSize(QSize(250, 30));
        listInput->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-radius: 4px;"));

        horizontalLayout_3->addWidget(listInput);

        add_button = new QPushButton(tab_3);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setMaximumSize(QSize(150, 30));
        add_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14px;\n"
"	font: bold;\n"
"	color: #dae1e7;\n"
"	border: solid;\n"
"	border-radius: 4px;\n"
"	background-color: #3282b8;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #0f4c75;\n"
"}"));

        horizontalLayout_3->addWidget(add_button);


        verticalLayout_3->addLayout(horizontalLayout_3);

        clearAllList_button = new QPushButton(tab_3);
        clearAllList_button->setObjectName(QString::fromUtf8("clearAllList_button"));
        clearAllList_button->setMaximumSize(QSize(400, 20));
        clearAllList_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 16px;\n"
"	font: bold;\n"
"	text-align: left;\n"
"	color: #3282b8;\n"
"	border: none;\n"
"	background: none;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #0f4c75;\n"
"}"));

        verticalLayout_3->addWidget(clearAllList_button);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        name_label = new QLabel(tab_4);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setMaximumSize(QSize(250, 100));
        name_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));

        horizontalLayout_8->addWidget(name_label);

        pay_label = new QLabel(tab_4);
        pay_label->setObjectName(QString::fromUtf8("pay_label"));
        pay_label->setMaximumSize(QSize(150, 100));
        pay_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));
        pay_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(pay_label);


        verticalLayout_5->addLayout(horizontalLayout_8);

        name_scrollArea = new QScrollArea(tab_4);
        name_scrollArea->setObjectName(QString::fromUtf8("name_scrollArea"));
        name_scrollArea->setMaximumSize(QSize(400, 200));
        name_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 336, 200));
        name_scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(name_scrollArea);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        nameInput = new QLineEdit(tab_4);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));
        nameInput->setMaximumSize(QSize(250, 30));
        nameInput->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-radius: 4px;"));

        horizontalLayout_9->addWidget(nameInput);

        add_button_2 = new QPushButton(tab_4);
        add_button_2->setObjectName(QString::fromUtf8("add_button_2"));
        add_button_2->setMaximumSize(QSize(150, 30));
        add_button_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14px;\n"
"	font: bold;\n"
"	color: #dae1e7;\n"
"	border: solid;\n"
"	border-radius: 4px;\n"
"	background-color: #3282b8;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #0f4c75;\n"
"}"));

        horizontalLayout_9->addWidget(add_button_2);


        verticalLayout_5->addLayout(horizontalLayout_9);

        claerAllName_button = new QPushButton(tab_4);
        claerAllName_button->setObjectName(QString::fromUtf8("claerAllName_button"));
        claerAllName_button->setMaximumSize(QSize(400, 20));
        claerAllName_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 16px;\n"
"	font: bold;\n"
"	text-align: left;\n"
"	color: #3282b8;\n"
"	border: none;\n"
"	background: none;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #0f4c75;\n"
"}"));

        verticalLayout_5->addWidget(claerAllName_button);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        createBill_button = new QPushButton(centralwidget);
        createBill_button->setObjectName(QString::fromUtf8("createBill_button"));
        createBill_button->setMaximumSize(QSize(400, 40));
        createBill_button->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	font: 14px;\n"
"	font: bold;\n"
"	color: #dae1e7; \n"
"	border: outset;\n"
"	border-radius: 10px;\n"
"	background-color: #3282b8;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #0f4c75;\n"
"}"));

        verticalLayout->addWidget(createBill_button);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BillSplittr", nullptr));
        numPeople_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0f4c75;\"># of People</span></p></body></html>", nullptr));
        numPeople->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600; color:#0f4c75;\">0</span></p></body></html>", nullptr));
        total_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0f4c75;\">Total</span></p></body></html>", nullptr));
        totalPrice->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600; color:#0f4c75;\">0</span></p></body></html>", nullptr));
        listName_label->setText(QCoreApplication::translate("MainWindow", "List Name", nullptr));
        price_label->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        perPerson_label->setText(QCoreApplication::translate("MainWindow", "Per Person", nullptr));
        add_button->setText(QCoreApplication::translate("MainWindow", "Add \342\217\216", nullptr));
        clearAllList_button->setText(QCoreApplication::translate("MainWindow", "Clear All List \342\214\253", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\342\230\260 List", nullptr));
        name_label->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        pay_label->setText(QCoreApplication::translate("MainWindow", "Pay", nullptr));
        add_button_2->setText(QCoreApplication::translate("MainWindow", "Add \342\217\216", nullptr));
        claerAllName_button->setText(QCoreApplication::translate("MainWindow", "Clear All Name \342\214\253", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\354\233\203 Payer", nullptr));
        createBill_button->setText(QCoreApplication::translate("MainWindow", "Create Bill \342\217\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
