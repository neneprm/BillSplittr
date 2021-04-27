/********************************************************************************
** Form generated from reading UI file 'peoplewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLEWINDOW_H
#define UI_PEOPLEWINDOW_H

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

class Ui_PeopleWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *name_label;
    QLabel *pay_label;
    QScrollArea *name_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *nameInput;
    QPushButton *add_button;
    QPushButton *claerAllName_button;

    void setupUi(QWidget *PeopleWindow)
    {
        if (PeopleWindow->objectName().isEmpty())
            PeopleWindow->setObjectName(QString::fromUtf8("PeopleWindow"));
        PeopleWindow->resize(400, 400);
        PeopleWindow->setMaximumSize(QSize(400, 400));
        PeopleWindow->setStyleSheet(QString::fromUtf8("background-color: #dae1e7;"));
        verticalLayout = new QVBoxLayout(PeopleWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        name_label = new QLabel(PeopleWindow);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setMaximumSize(QSize(250, 100));
        name_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));

        horizontalLayout->addWidget(name_label);

        pay_label = new QLabel(PeopleWindow);
        pay_label->setObjectName(QString::fromUtf8("pay_label"));
        pay_label->setMaximumSize(QSize(150, 100));
        pay_label->setStyleSheet(QString::fromUtf8("font: 16px;\n"
"font: bold;\n"
"color: #3282b8;"));
        pay_label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(pay_label);


        verticalLayout->addLayout(horizontalLayout);

        name_scrollArea = new QScrollArea(PeopleWindow);
        name_scrollArea->setObjectName(QString::fromUtf8("name_scrollArea"));
        name_scrollArea->setMaximumSize(QSize(400, 300));
        name_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 374, 280));
        name_scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(name_scrollArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameInput = new QLineEdit(PeopleWindow);
        nameInput->setObjectName(QString::fromUtf8("nameInput"));
        nameInput->setMaximumSize(QSize(250, 40));
        nameInput->setStyleSheet(QString::fromUtf8("background-color: none;\n"
"border-radius: 4px;"));

        horizontalLayout_2->addWidget(nameInput);

        add_button = new QPushButton(PeopleWindow);
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

        claerAllName_button = new QPushButton(PeopleWindow);
        claerAllName_button->setObjectName(QString::fromUtf8("claerAllName_button"));
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

        verticalLayout->addWidget(claerAllName_button);


        retranslateUi(PeopleWindow);

        QMetaObject::connectSlotsByName(PeopleWindow);
    } // setupUi

    void retranslateUi(QWidget *PeopleWindow)
    {
        PeopleWindow->setWindowTitle(QCoreApplication::translate("PeopleWindow", "Form", nullptr));
        name_label->setText(QCoreApplication::translate("PeopleWindow", "Name", nullptr));
        pay_label->setText(QCoreApplication::translate("PeopleWindow", "Pay", nullptr));
        add_button->setText(QCoreApplication::translate("PeopleWindow", "Add \342\217\216", nullptr));
        claerAllName_button->setText(QCoreApplication::translate("PeopleWindow", "Clear All Name \342\214\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PeopleWindow: public Ui_PeopleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLEWINDOW_H
