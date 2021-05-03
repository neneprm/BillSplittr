/********************************************************************************
** Form generated from reading UI file 'createbilldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBILLDIALOG_H
#define UI_CREATEBILLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateBillDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *billSplittr;
    QDateTimeEdit *dateTime;
    QHBoxLayout *horizontalLayout_2;
    QLabel *numPeople_label;
    QLabel *numPeople;
    QSpacerItem *horizontalSpacer;
    QLabel *total_label;
    QLabel *total;
    QFrame *line_2;
    QLabel *payer_label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *name_label;
    QLabel *pay_label;
    QScrollArea *billName_scrollArea;
    QWidget *billName_scrollAreaWidgetContents;
    QLabel *list_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *listName_label;
    QLabel *price_label;
    QLabel *perPerson_label;
    QScrollArea *listName_scrollArea;
    QWidget *billList_crollAreaWidgetContents;

    void setupUi(QDialog *CreateBillDialog)
    {
        if (CreateBillDialog->objectName().isEmpty())
            CreateBillDialog->setObjectName(QString::fromUtf8("CreateBillDialog"));
        CreateBillDialog->resize(400, 700);
        CreateBillDialog->setMinimumSize(QSize(400, 700));
        CreateBillDialog->setMaximumSize(QSize(400, 700));
        CreateBillDialog->setStyleSheet(QString::fromUtf8("background: rgb(236, 236, 236);"));
        verticalLayout = new QVBoxLayout(CreateBillDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        billSplittr = new QLabel(CreateBillDialog);
        billSplittr->setObjectName(QString::fromUtf8("billSplittr"));
        billSplittr->setMaximumSize(QSize(16777215, 20));
        billSplittr->setStyleSheet(QString::fromUtf8("font: 14px;\n"
"font: bold;\n"
"color: #3282b8;\n"
"border: none"));

        horizontalLayout->addWidget(billSplittr);

        dateTime = new QDateTimeEdit(CreateBillDialog);
        dateTime->setObjectName(QString::fromUtf8("dateTime"));
        dateTime->setMaximumSize(QSize(16777215, 20));
        dateTime->setCursor(QCursor(Qt::BlankCursor));
        dateTime->setFocusPolicy(Qt::NoFocus);
        dateTime->setContextMenuPolicy(Qt::NoContextMenu);
        dateTime->setStyleSheet(QString::fromUtf8("font: 14px;\n"
"font: bold;\n"
"color: #3282b8;\n"
"border: none;"));
        dateTime->setFrame(false);
        dateTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dateTime->setReadOnly(false);
        dateTime->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateTime->setKeyboardTracking(false);

        horizontalLayout->addWidget(dateTime);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        numPeople_label = new QLabel(CreateBillDialog);
        numPeople_label->setObjectName(QString::fromUtf8("numPeople_label"));
        numPeople_label->setMaximumSize(QSize(150, 20));
        numPeople_label->setStyleSheet(QString::fromUtf8("font: 14px;\n"
"font: bold;\n"
"color: #0f4c75;"));
        numPeople_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(numPeople_label);

        numPeople = new QLabel(CreateBillDialog);
        numPeople->setObjectName(QString::fromUtf8("numPeople"));
        numPeople->setMaximumSize(QSize(50, 20));
        numPeople->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #0f4c75;"));
        numPeople->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(numPeople);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        total_label = new QLabel(CreateBillDialog);
        total_label->setObjectName(QString::fromUtf8("total_label"));
        total_label->setMaximumSize(QSize(50, 20));
        total_label->setStyleSheet(QString::fromUtf8("font: 14px;\n"
"font: bold;\n"
"color: #0f4c75;"));
        total_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(total_label);

        total = new QLabel(CreateBillDialog);
        total->setObjectName(QString::fromUtf8("total"));
        total->setMaximumSize(QSize(70, 20));
        total->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #0f4c75;"));
        total->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(total);


        verticalLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(CreateBillDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMaximumSize(QSize(16777215, 2));
        line_2->setStyleSheet(QString::fromUtf8("background-color: #3282b8;\n"
"border:outset;\n"
""));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        payer_label = new QLabel(CreateBillDialog);
        payer_label->setObjectName(QString::fromUtf8("payer_label"));
        payer_label->setMaximumSize(QSize(16777215, 30));
        payer_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #0f4c75;"));

        verticalLayout->addWidget(payer_label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        name_label = new QLabel(CreateBillDialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setMaximumSize(QSize(16777215, 30));
        name_label->setStyleSheet(QString::fromUtf8("font: 14px;\n"
"font: bold;\n"
"color: #3282b8;"));

        horizontalLayout_4->addWidget(name_label);

        pay_label = new QLabel(CreateBillDialog);
        pay_label->setObjectName(QString::fromUtf8("pay_label"));
        pay_label->setMaximumSize(QSize(16777215, 30));
        pay_label->setStyleSheet(QString::fromUtf8("font: 14px;\n"
"font: bold;\n"
"color: #3282b8;"));
        pay_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(pay_label);


        verticalLayout->addLayout(horizontalLayout_4);

        billName_scrollArea = new QScrollArea(CreateBillDialog);
        billName_scrollArea->setObjectName(QString::fromUtf8("billName_scrollArea"));
        billName_scrollArea->setMaximumSize(QSize(16777215, 230));
        billName_scrollArea->setStyleSheet(QString::fromUtf8("background-color: #dae1e7;\n"
"border-radius: 10px;\n"
"font: 14px;\n"
"font-weight: bold;\n"
"color: #0f4c75;"));
        billName_scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        billName_scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        billName_scrollArea->setWidgetResizable(true);
        billName_scrollAreaWidgetContents = new QWidget();
        billName_scrollAreaWidgetContents->setObjectName(QString::fromUtf8("billName_scrollAreaWidgetContents"));
        billName_scrollAreaWidgetContents->setGeometry(QRect(0, 0, 376, 230));
        billName_scrollArea->setWidget(billName_scrollAreaWidgetContents);

        verticalLayout->addWidget(billName_scrollArea);

        list_label = new QLabel(CreateBillDialog);
        list_label->setObjectName(QString::fromUtf8("list_label"));
        list_label->setMaximumSize(QSize(16777215, 30));
        list_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #0f4c75;"));

        verticalLayout->addWidget(list_label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        listName_label = new QLabel(CreateBillDialog);
        listName_label->setObjectName(QString::fromUtf8("listName_label"));
        listName_label->setMaximumSize(QSize(16777215, 20));
        listName_label->setStyleSheet(QString::fromUtf8("font: 14px;\n"
"font: bold;\n"
"color: #3282b8;"));

        horizontalLayout_3->addWidget(listName_label);

        price_label = new QLabel(CreateBillDialog);
        price_label->setObjectName(QString::fromUtf8("price_label"));
        price_label->setMaximumSize(QSize(16777215, 20));
        price_label->setStyleSheet(QString::fromUtf8("font: 14px;\n"
"font: bold;\n"
"color: #3282b8;"));
        price_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(price_label);

        perPerson_label = new QLabel(CreateBillDialog);
        perPerson_label->setObjectName(QString::fromUtf8("perPerson_label"));
        perPerson_label->setMaximumSize(QSize(16777215, 20));
        perPerson_label->setStyleSheet(QString::fromUtf8("font: 14px;\n"
"font: bold;\n"
"color: #3282b8;"));
        perPerson_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(perPerson_label);


        verticalLayout->addLayout(horizontalLayout_3);

        listName_scrollArea = new QScrollArea(CreateBillDialog);
        listName_scrollArea->setObjectName(QString::fromUtf8("listName_scrollArea"));
        listName_scrollArea->setMaximumSize(QSize(16777215, 230));
        listName_scrollArea->setStyleSheet(QString::fromUtf8("background-color: #dae1e7;\n"
"border-radius: 10px;\n"
"font: 14px;\n"
"font-weight: bold;\n"
"color: #0f4c75;"));
        listName_scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listName_scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listName_scrollArea->setWidgetResizable(true);
        billList_crollAreaWidgetContents = new QWidget();
        billList_crollAreaWidgetContents->setObjectName(QString::fromUtf8("billList_crollAreaWidgetContents"));
        billList_crollAreaWidgetContents->setGeometry(QRect(0, 0, 376, 230));
        listName_scrollArea->setWidget(billList_crollAreaWidgetContents);

        verticalLayout->addWidget(listName_scrollArea);


        retranslateUi(CreateBillDialog);

        QMetaObject::connectSlotsByName(CreateBillDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateBillDialog)
    {
        CreateBillDialog->setWindowTitle(QCoreApplication::translate("CreateBillDialog", "BillSplittr", nullptr));
        billSplittr->setText(QCoreApplication::translate("CreateBillDialog", "BillSplittr", nullptr));
        numPeople_label->setText(QCoreApplication::translate("CreateBillDialog", "Number of People:", nullptr));
        numPeople->setText(QCoreApplication::translate("CreateBillDialog", "0", nullptr));
        total_label->setText(QCoreApplication::translate("CreateBillDialog", "Total:", nullptr));
        total->setText(QCoreApplication::translate("CreateBillDialog", "0", nullptr));
        payer_label->setText(QCoreApplication::translate("CreateBillDialog", "\354\233\203 Payer", nullptr));
        name_label->setText(QCoreApplication::translate("CreateBillDialog", "Name", nullptr));
        pay_label->setText(QCoreApplication::translate("CreateBillDialog", "Pay  ", nullptr));
        list_label->setText(QCoreApplication::translate("CreateBillDialog", "\342\230\260 List", nullptr));
        listName_label->setText(QCoreApplication::translate("CreateBillDialog", "List Name", nullptr));
        price_label->setText(QCoreApplication::translate("CreateBillDialog", "Price", nullptr));
        perPerson_label->setText(QCoreApplication::translate("CreateBillDialog", "Per Person", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateBillDialog: public Ui_CreateBillDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBILLDIALOG_H
