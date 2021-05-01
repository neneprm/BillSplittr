#ifndef LISTADDINGDIALOG_H
#define LISTADDINGDIALOG_H

#include "payer.h"
#include <QDialog>
#include <QVector>
#include <QGridLayout>

namespace Ui {
class ListAddingDialog;
}

class ListAddingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListAddingDialog(QWidget *parent = nullptr, QString listName = "");
    ~ListAddingDialog();

    QString getPriceVal();
    int priceVal{};

    void setPayerList(QVector<Payer*> list);

private slots:
    void numButton_clicked();
    void mathButton_clicked();
    void on_equal_button_clicked();
    void on_del_button_clicked();
    void on_selectAll_button_clicked();
    void on_done_button_clicked();

private:
    Ui::ListAddingDialog *ui;

    QPushButton *numButtons[10];
    QPushButton *nameButton;
    QVector<QPushButton*> nameButtonList;
    QVector<Payer*> payerList;
    QGridLayout *nameGridLayout;


    bool isAdd = false;
    bool isSubtract = false;
    bool isMultiply = false;
    bool isDivide = false;

    void setNameList();
};

#endif // LISTADDINGDIALOG_H
