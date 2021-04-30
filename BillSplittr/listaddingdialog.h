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
    void setPayerList(QVector<Payer*>list);

    ~ListAddingDialog();

private slots:
    void on_num_button_clicked();
    void on_math_button_clicked();
    void on_equal_button_clicked();
    void on_del_button_clicked();

    void on_selectAll_button_clicked();

private:
    Ui::ListAddingDialog *ui;

    QPushButton *numButtons[10];
    QPushButton *nameButton;
    QVector<QPushButton*> nameButtonList;
    QVector<Payer*> payerList;
    QGridLayout *nameGridLayout;

    int priceVal{};
    bool isAdd = false;
    bool isSubtract = false;
    bool isMultiply = false;
    bool isDivide = false;
    void setNameList();
};

#endif // LISTADDINGDIALOG_H
