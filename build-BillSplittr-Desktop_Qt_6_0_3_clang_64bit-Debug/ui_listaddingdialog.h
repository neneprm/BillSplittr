/********************************************************************************
** Form generated from reading UI file 'listaddingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTADDINGDIALOG_H
#define UI_LISTADDINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListAddingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *list_label;
    QLabel *listNameInput_label;
    QLineEdit *priceInput;
    QScrollArea *nameList_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *selectAll_button;
    QGridLayout *gridLayout_5;
    QPushButton *five;
    QPushButton *del_button;
    QPushButton *two;
    QPushButton *multiply_button;
    QPushButton *nine;
    QPushButton *clear_button;
    QPushButton *divide_button;
    QPushButton *one;
    QPushButton *minus_button;
    QPushButton *six;
    QPushButton *eight;
    QPushButton *plus_button;
    QPushButton *four;
    QPushButton *seven;
    QPushButton *zero;
    QPushButton *three;
    QPushButton *equal_button;
    QPushButton *done_button;

    void setupUi(QDialog *ListAddingDialog)
    {
        if (ListAddingDialog->objectName().isEmpty())
            ListAddingDialog->setObjectName(QString::fromUtf8("ListAddingDialog"));
        ListAddingDialog->resize(400, 600);
        ListAddingDialog->setMinimumSize(QSize(400, 600));
        ListAddingDialog->setMaximumSize(QSize(400, 600));
        ListAddingDialog->setStyleSheet(QString::fromUtf8("background: rgb(236, 236, 236);"));
        verticalLayout = new QVBoxLayout(ListAddingDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        list_label = new QLabel(ListAddingDialog);
        list_label->setObjectName(QString::fromUtf8("list_label"));
        list_label->setMaximumSize(QSize(400, 20));
        list_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #0f4c75;"));
        list_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(list_label);

        listNameInput_label = new QLabel(ListAddingDialog);
        listNameInput_label->setObjectName(QString::fromUtf8("listNameInput_label"));
        listNameInput_label->setMaximumSize(QSize(400, 40));
        listNameInput_label->setStyleSheet(QString::fromUtf8("font: 18px;\n"
"font: bold;\n"
"color: #0f4c75;"));
        listNameInput_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(listNameInput_label);

        priceInput = new QLineEdit(ListAddingDialog);
        priceInput->setObjectName(QString::fromUtf8("priceInput"));
        priceInput->setMaximumSize(QSize(400, 40));
        priceInput->setStyleSheet(QString::fromUtf8("font: 36px;\n"
"font: bold;\n"
"color: #0f4c75;\n"
"background-color: white;"));
        priceInput->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(priceInput);

        nameList_scrollArea = new QScrollArea(ListAddingDialog);
        nameList_scrollArea->setObjectName(QString::fromUtf8("nameList_scrollArea"));
        nameList_scrollArea->setMaximumSize(QSize(400, 150));
        nameList_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 374, 148));
        nameList_scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(nameList_scrollArea);

        selectAll_button = new QPushButton(ListAddingDialog);
        selectAll_button->setObjectName(QString::fromUtf8("selectAll_button"));
        selectAll_button->setMaximumSize(QSize(400, 40));
        selectAll_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14px;\n"
"	font: bold;\n"
"	color: #3282b8;\n"
"	border: solid;\n"
"	border-radius: 10px;\n"
"	border-color: #3282b8;\n"
"	border-width: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #0f4c75;\n"
"	border-color: #0f4c75;\n"
"}"));

        verticalLayout->addWidget(selectAll_button);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetMaximumSize);
        five = new QPushButton(ListAddingDialog);
        five->setObjectName(QString::fromUtf8("five"));
        five->setMaximumSize(QSize(100, 40));
        five->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(five, 1, 1, 1, 1);

        del_button = new QPushButton(ListAddingDialog);
        del_button->setObjectName(QString::fromUtf8("del_button"));
        del_button->setMaximumSize(QSize(100, 40));
        del_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(del_button, 3, 2, 1, 1);

        two = new QPushButton(ListAddingDialog);
        two->setObjectName(QString::fromUtf8("two"));
        two->setMaximumSize(QSize(100, 40));
        two->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(two, 2, 1, 1, 1);

        multiply_button = new QPushButton(ListAddingDialog);
        multiply_button->setObjectName(QString::fromUtf8("multiply_button"));
        multiply_button->setMaximumSize(QSize(100, 40));
        multiply_button->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	font: 20px;\n"
"	font: bold;\n"
"	color: #3282b8;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #dae1e7;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #0f4c75;\n"
"}"));

        gridLayout_5->addWidget(multiply_button, 1, 3, 1, 1);

        nine = new QPushButton(ListAddingDialog);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setMaximumSize(QSize(100, 40));
        nine->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	border-left: none;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(nine, 0, 2, 1, 1);

        clear_button = new QPushButton(ListAddingDialog);
        clear_button->setObjectName(QString::fromUtf8("clear_button"));
        clear_button->setMaximumSize(QSize(100, 40));
        clear_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(clear_button, 3, 0, 1, 1);

        divide_button = new QPushButton(ListAddingDialog);
        divide_button->setObjectName(QString::fromUtf8("divide_button"));
        divide_button->setMaximumSize(QSize(100, 40));
        divide_button->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	font: 20px;\n"
"	font: bold;\n"
"	color: #3282b8;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #dae1e7;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #0f4c75;\n"
"}"));

        gridLayout_5->addWidget(divide_button, 0, 3, 1, 1);

        one = new QPushButton(ListAddingDialog);
        one->setObjectName(QString::fromUtf8("one"));
        one->setMaximumSize(QSize(100, 40));
        one->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(one, 2, 0, 1, 1);

        minus_button = new QPushButton(ListAddingDialog);
        minus_button->setObjectName(QString::fromUtf8("minus_button"));
        minus_button->setMaximumSize(QSize(100, 40));
        minus_button->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	font: 20px;\n"
"	font: bold;\n"
"	color: #3282b8;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #dae1e7;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #0f4c75;\n"
"}"));

        gridLayout_5->addWidget(minus_button, 2, 3, 1, 1);

        six = new QPushButton(ListAddingDialog);
        six->setObjectName(QString::fromUtf8("six"));
        six->setMaximumSize(QSize(100, 40));
        six->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(six, 1, 2, 1, 1);

        eight = new QPushButton(ListAddingDialog);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setMaximumSize(QSize(100, 40));
        eight->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(eight, 0, 1, 1, 1);

        plus_button = new QPushButton(ListAddingDialog);
        plus_button->setObjectName(QString::fromUtf8("plus_button"));
        plus_button->setMaximumSize(QSize(100, 40));
        plus_button->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	font: 20px;\n"
"	font: bold;\n"
"	color: #3282b8;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #dae1e7;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #0f4c75;\n"
"}"));

        gridLayout_5->addWidget(plus_button, 3, 3, 1, 1);

        four = new QPushButton(ListAddingDialog);
        four->setObjectName(QString::fromUtf8("four"));
        four->setMaximumSize(QSize(100, 40));
        four->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(four, 1, 0, 1, 1);

        seven = new QPushButton(ListAddingDialog);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setMaximumSize(QSize(100, 40));
        seven->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(seven, 0, 0, 1, 1);

        zero = new QPushButton(ListAddingDialog);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setMaximumSize(QSize(100, 40));
        zero->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(zero, 3, 1, 1, 1);

        three = new QPushButton(ListAddingDialog);
        three->setObjectName(QString::fromUtf8("three"));
        three->setMaximumSize(QSize(100, 40));
        three->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 18px;\n"
"	font: bold;\n"
"	color: #0f4c75;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #f6f5f5;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	color: #3282b8;\n"
"}"));

        gridLayout_5->addWidget(three, 2, 2, 1, 1);

        equal_button = new QPushButton(ListAddingDialog);
        equal_button->setObjectName(QString::fromUtf8("equal_button"));
        equal_button->setMaximumSize(QSize(100, 40));
        equal_button->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	font: 20px;\n"
"	font: bold;\n"
"	color: #3282b8;\n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #dae1e7;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #0f4c75;\n"
"}"));

        gridLayout_5->addWidget(equal_button, 4, 3, 1, 1);

        done_button = new QPushButton(ListAddingDialog);
        done_button->setObjectName(QString::fromUtf8("done_button"));
        done_button->setMaximumSize(QSize(300, 40));
        done_button->setStyleSheet(QString::fromUtf8("QPushButton {	\n"
"	font: 14px;\n"
"	font: bold;\n"
"	color: #dae1e7; \n"
"	border: outset;\n"
"	border-radius: 6px;\n"
"	background-color: #3282b8;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #0f4c75;\n"
"}"));

        gridLayout_5->addWidget(done_button, 4, 0, 1, 3);


        verticalLayout->addLayout(gridLayout_5);

#if QT_CONFIG(shortcut)
        listNameInput_label->setBuddy(listNameInput_label);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ListAddingDialog);

        QMetaObject::connectSlotsByName(ListAddingDialog);
    } // setupUi

    void retranslateUi(QDialog *ListAddingDialog)
    {
        ListAddingDialog->setWindowTitle(QCoreApplication::translate("ListAddingDialog", "Dialog", nullptr));
        list_label->setText(QCoreApplication::translate("ListAddingDialog", "List", nullptr));
        listNameInput_label->setText(QString());
        priceInput->setText(QCoreApplication::translate("ListAddingDialog", "0", nullptr));
        selectAll_button->setText(QCoreApplication::translate("ListAddingDialog", "Select All", nullptr));
        five->setText(QCoreApplication::translate("ListAddingDialog", "5", nullptr));
        del_button->setText(QCoreApplication::translate("ListAddingDialog", "\342\214\253", nullptr));
        two->setText(QCoreApplication::translate("ListAddingDialog", "2", nullptr));
        multiply_button->setText(QCoreApplication::translate("ListAddingDialog", "\303\227", nullptr));
        nine->setText(QCoreApplication::translate("ListAddingDialog", "9", nullptr));
        clear_button->setText(QCoreApplication::translate("ListAddingDialog", "AC", nullptr));
        divide_button->setText(QCoreApplication::translate("ListAddingDialog", "\303\267", nullptr));
        one->setText(QCoreApplication::translate("ListAddingDialog", "1", nullptr));
        minus_button->setText(QCoreApplication::translate("ListAddingDialog", "\342\210\222", nullptr));
        six->setText(QCoreApplication::translate("ListAddingDialog", "6", nullptr));
        eight->setText(QCoreApplication::translate("ListAddingDialog", "8", nullptr));
        plus_button->setText(QCoreApplication::translate("ListAddingDialog", "+", nullptr));
        four->setText(QCoreApplication::translate("ListAddingDialog", "4", nullptr));
        seven->setText(QCoreApplication::translate("ListAddingDialog", "7", nullptr));
        zero->setText(QCoreApplication::translate("ListAddingDialog", "0", nullptr));
        three->setText(QCoreApplication::translate("ListAddingDialog", "3", nullptr));
        equal_button->setText(QCoreApplication::translate("ListAddingDialog", "=", nullptr));
        done_button->setText(QCoreApplication::translate("ListAddingDialog", "Done \342\217\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListAddingDialog: public Ui_ListAddingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTADDINGDIALOG_H
