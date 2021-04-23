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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
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
    QLabel *numPeopleLabel;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QLabel *totalLabel;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *listButton;
    QPushButton *payerButton;
    QFrame *frame;
    QPushButton *createBillButton;

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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        numPeopleLabel = new QLabel(centralwidget);
        numPeopleLabel->setObjectName(QString::fromUtf8("numPeopleLabel"));
        numPeopleLabel->setMaximumSize(QSize(16777215, 30));
        numPeopleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(numPeopleLabel);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 50));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        totalLabel = new QLabel(centralwidget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));
        totalLabel->setMaximumSize(QSize(16777215, 30));
        totalLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(totalLabel);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 50));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listButton = new QPushButton(centralwidget);
        listButton->setObjectName(QString::fromUtf8("listButton"));
        listButton->setMaximumSize(QSize(200, 70));
        listButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18px;\n"
"	font-weight: bold;\n"
"	background: none;\n"
"	border: outset;\n"
"	border-width: 3px;\n"
"	border-top: none;\n"
"	border-right: none;\n"
"	border-left: none;\n"
"	border-bottom-color: gray;\n"
"}\n"
"QPushButton:checked {\n"
"	border: outset;\n"
"	color: #ff9292;\n"
"	border-width: 3px;\n"
"	border-top: none;\n"
"	border-right: none;\n"
"	border-left: none;\n"
"	border-bottom-color: pink;\n"
"}"));
        listButton->setCheckable(true);
        listButton->setChecked(false);

        horizontalLayout_2->addWidget(listButton);

        payerButton = new QPushButton(centralwidget);
        payerButton->setObjectName(QString::fromUtf8("payerButton"));
        payerButton->setMaximumSize(QSize(200, 70));
        payerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 18px;\n"
"	font-weight: bold;\n"
"	background: none;\n"
"	border: outset;\n"
"	border-width: 3px;\n"
"	border-top: none;\n"
"	border-right: none;\n"
"	border-left: none;\n"
"	border-bottom-color: gray;\n"
"}\n"
"QPushButton:checked {\n"
"	border: outset;\n"
"	color: pink;\n"
"	border-width: 3px;\n"
"	border-top: none;\n"
"	border-right: none;\n"
"	border-left: none;\n"
"	border-bottom-color: pink;\n"
"}"));
        payerButton->setCheckable(true);
        payerButton->setChecked(false);

        horizontalLayout_2->addWidget(payerButton);


        verticalLayout->addLayout(horizontalLayout_2);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(400, 400));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        createBillButton = new QPushButton(centralwidget);
        createBillButton->setObjectName(QString::fromUtf8("createBillButton"));
        createBillButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(createBillButton);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "BillSplittr", nullptr));
        numPeopleLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\"># of People</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600;\">0</span></p></body></html>", nullptr));
        totalLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Total</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:600;\">0</span></p></body></html>", nullptr));
        listButton->setText(QCoreApplication::translate("MainWindow", "\342\230\260 List", nullptr));
        payerButton->setText(QCoreApplication::translate("MainWindow", "\354\233\203 Payer", nullptr));
        createBillButton->setText(QCoreApplication::translate("MainWindow", "Create Bill", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
