/********************************************************************************
** Form generated from reading UI file 'listwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWINDOW_H
#define UI_LISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *listName_label;
    QLabel *price_label;
    QLabel *perPerson_label;
    QScrollArea *list_scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *listInput;
    QPushButton *add_button;
    QPushButton *clearAllList_button;

    void setupUi(QWidget *ListWindow)
    {
        if (ListWindow->objectName().isEmpty())
            ListWindow->setObjectName(QString::fromUtf8("ListWindow"));
        ListWindow->resize(400, 400);
        ListWindow->setMaximumSize(QSize(400, 400));
        ListWindow->setStyleSheet(QString::fromUtf8("background-color: #dae1e7;"));
        verticalLayout = new QVBoxLayout(ListWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listName_label = new QLabel(ListWindow);
        listName_label->setObjectName(QString::fromUtf8("listName_label"));
        listName_label->setMaximumSize(QSize(200, 100));
        listName_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));

        horizontalLayout->addWidget(listName_label);

        price_label = new QLabel(ListWindow);
        price_label->setObjectName(QString::fromUtf8("price_label"));
        price_label->setMaximumSize(QSize(100, 100));
        price_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));

        horizontalLayout->addWidget(price_label);

        perPerson_label = new QLabel(ListWindow);
        perPerson_label->setObjectName(QString::fromUtf8("perPerson_label"));
        perPerson_label->setMaximumSize(QSize(100, 100));
        perPerson_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));
        perPerson_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(perPerson_label);


        verticalLayout->addLayout(horizontalLayout);

        list_scrollArea = new QScrollArea(ListWindow);
        list_scrollArea->setObjectName(QString::fromUtf8("list_scrollArea"));
        list_scrollArea->setMaximumSize(QSize(400, 300));
        list_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 374, 280));
        list_scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(list_scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listInput = new QLineEdit(ListWindow);
        listInput->setObjectName(QString::fromUtf8("listInput"));
        listInput->setMaximumSize(QSize(250, 40));
        listInput->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-radius: 4px;"));

        horizontalLayout_2->addWidget(listInput);

        add_button = new QPushButton(ListWindow);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setMaximumSize(QSize(150, 40));
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

        horizontalLayout_2->addWidget(add_button);


        verticalLayout->addLayout(horizontalLayout_2);

        clearAllList_button = new QPushButton(ListWindow);
        clearAllList_button->setObjectName(QString::fromUtf8("clearAllList_button"));
        clearAllList_button->setMaximumSize(QSize(400, 100));
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

        verticalLayout->addWidget(clearAllList_button);


        retranslateUi(ListWindow);

        QMetaObject::connectSlotsByName(ListWindow);
    } // setupUi

    void retranslateUi(QWidget *ListWindow)
    {
        ListWindow->setWindowTitle(QCoreApplication::translate("ListWindow", "Form", nullptr));
        listName_label->setText(QCoreApplication::translate("ListWindow", "List Name", nullptr));
        price_label->setText(QCoreApplication::translate("ListWindow", "Price", nullptr));
        perPerson_label->setText(QCoreApplication::translate("ListWindow", "Per Person", nullptr));
        add_button->setText(QCoreApplication::translate("ListWindow", "Add \342\217\216", nullptr));
        clearAllList_button->setText(QCoreApplication::translate("ListWindow", "Clear All List \342\214\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListWindow: public Ui_ListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWINDOW_H
