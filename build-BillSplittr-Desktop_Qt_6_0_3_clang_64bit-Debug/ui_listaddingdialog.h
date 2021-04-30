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
    QWidget *nameList_scrollAreaWidgetContents;
    QPushButton *selectAll_button;
    QGridLayout *gridLayout_5;
    QPushButton *button5;
    QPushButton *del_button;
    QPushButton *button2;
    QPushButton *multiply_button;
    QPushButton *button9;
    QPushButton *clear_button;
    QPushButton *divide_button;
    QPushButton *button1;
    QPushButton *minus_button;
    QPushButton *button6;
    QPushButton *button8;
    QPushButton *plus_button;
    QPushButton *button4;
    QPushButton *button7;
    QPushButton *button0;
    QPushButton *button3;
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
"background-color: #f6f5f5;\n"
"border-radius: 10px;"));
        priceInput->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(priceInput);

        nameList_scrollArea = new QScrollArea(ListAddingDialog);
        nameList_scrollArea->setObjectName(QString::fromUtf8("nameList_scrollArea"));
        nameList_scrollArea->setMaximumSize(QSize(400, 150));
        nameList_scrollArea->setStyleSheet(QString::fromUtf8("background-color: #dae1e7;\n"
"border-radius: 10px;\n"
"font: 16px;\n"
"font-weight: bold;\n"
"color: #0f4c75;;"));
        nameList_scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nameList_scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nameList_scrollArea->setWidgetResizable(true);
        nameList_scrollAreaWidgetContents = new QWidget();
        nameList_scrollAreaWidgetContents->setObjectName(QString::fromUtf8("nameList_scrollAreaWidgetContents"));
        nameList_scrollAreaWidgetContents->setGeometry(QRect(0, 0, 376, 150));
        nameList_scrollArea->setWidget(nameList_scrollAreaWidgetContents);

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
        button5 = new QPushButton(ListAddingDialog);
        button5->setObjectName(QString::fromUtf8("button5"));
        button5->setMaximumSize(QSize(100, 40));
        button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button5, 1, 1, 1, 1);

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

        button2 = new QPushButton(ListAddingDialog);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setMaximumSize(QSize(100, 40));
        button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button2, 2, 1, 1, 1);

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

        button9 = new QPushButton(ListAddingDialog);
        button9->setObjectName(QString::fromUtf8("button9"));
        button9->setMaximumSize(QSize(100, 40));
        button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button9, 0, 2, 1, 1);

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

        button1 = new QPushButton(ListAddingDialog);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setMaximumSize(QSize(100, 40));
        button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button1, 2, 0, 1, 1);

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

        button6 = new QPushButton(ListAddingDialog);
        button6->setObjectName(QString::fromUtf8("button6"));
        button6->setMaximumSize(QSize(100, 40));
        button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button6, 1, 2, 1, 1);

        button8 = new QPushButton(ListAddingDialog);
        button8->setObjectName(QString::fromUtf8("button8"));
        button8->setMaximumSize(QSize(100, 40));
        button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button8, 0, 1, 1, 1);

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

        button4 = new QPushButton(ListAddingDialog);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setMaximumSize(QSize(100, 40));
        button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button4, 1, 0, 1, 1);

        button7 = new QPushButton(ListAddingDialog);
        button7->setObjectName(QString::fromUtf8("button7"));
        button7->setMaximumSize(QSize(100, 40));
        button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button7, 0, 0, 1, 1);

        button0 = new QPushButton(ListAddingDialog);
        button0->setObjectName(QString::fromUtf8("button0"));
        button0->setMaximumSize(QSize(100, 40));
        button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button0, 3, 1, 1, 1);

        button3 = new QPushButton(ListAddingDialog);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setMaximumSize(QSize(100, 40));
        button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_5->addWidget(button3, 2, 2, 1, 1);

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
        QObject::connect(clear_button, &QPushButton::clicked, priceInput, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(ListAddingDialog);
    } // setupUi

    void retranslateUi(QDialog *ListAddingDialog)
    {
        ListAddingDialog->setWindowTitle(QCoreApplication::translate("ListAddingDialog", "Dialog", nullptr));
        list_label->setText(QCoreApplication::translate("ListAddingDialog", "List", nullptr));
        listNameInput_label->setText(QString());
        priceInput->setText(QString());
        selectAll_button->setText(QCoreApplication::translate("ListAddingDialog", "Select All", nullptr));
        button5->setText(QCoreApplication::translate("ListAddingDialog", "5", nullptr));
        del_button->setText(QCoreApplication::translate("ListAddingDialog", "\342\214\253", nullptr));
        button2->setText(QCoreApplication::translate("ListAddingDialog", "2", nullptr));
        multiply_button->setText(QCoreApplication::translate("ListAddingDialog", "\303\227", nullptr));
        button9->setText(QCoreApplication::translate("ListAddingDialog", "9", nullptr));
        clear_button->setText(QCoreApplication::translate("ListAddingDialog", "AC", nullptr));
        divide_button->setText(QCoreApplication::translate("ListAddingDialog", "\303\267", nullptr));
        button1->setText(QCoreApplication::translate("ListAddingDialog", "1", nullptr));
        minus_button->setText(QCoreApplication::translate("ListAddingDialog", "\342\210\222", nullptr));
        button6->setText(QCoreApplication::translate("ListAddingDialog", "6", nullptr));
        button8->setText(QCoreApplication::translate("ListAddingDialog", "8", nullptr));
        plus_button->setText(QCoreApplication::translate("ListAddingDialog", "+", nullptr));
        button4->setText(QCoreApplication::translate("ListAddingDialog", "4", nullptr));
        button7->setText(QCoreApplication::translate("ListAddingDialog", "7", nullptr));
        button0->setText(QCoreApplication::translate("ListAddingDialog", "0", nullptr));
        button3->setText(QCoreApplication::translate("ListAddingDialog", "3", nullptr));
        equal_button->setText(QCoreApplication::translate("ListAddingDialog", "=", nullptr));
        done_button->setText(QCoreApplication::translate("ListAddingDialog", "Done \342\217\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListAddingDialog: public Ui_ListAddingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTADDINGDIALOG_H
