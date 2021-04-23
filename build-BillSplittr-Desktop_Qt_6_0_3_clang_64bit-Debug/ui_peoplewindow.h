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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PeopleWindow
{
public:

    void setupUi(QWidget *PeopleWindow)
    {
        if (PeopleWindow->objectName().isEmpty())
            PeopleWindow->setObjectName(QString::fromUtf8("PeopleWindow"));
        PeopleWindow->resize(400, 400);

        retranslateUi(PeopleWindow);

        QMetaObject::connectSlotsByName(PeopleWindow);
    } // setupUi

    void retranslateUi(QWidget *PeopleWindow)
    {
        PeopleWindow->setWindowTitle(QCoreApplication::translate("PeopleWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PeopleWindow: public Ui_PeopleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLEWINDOW_H
