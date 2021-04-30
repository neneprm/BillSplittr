#ifndef LISTADDINGDIALOG_H
#define LISTADDINGDIALOG_H

#include <QDialog>

namespace Ui {
class ListAddingDialog;
}

class ListAddingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListAddingDialog(QWidget *parent = nullptr, QString listName = "");
    ~ListAddingDialog();

private slots:
    void on_num_button_clicked();
    void on_math_button_clicked();
    void on_equal_button_clicked();

    void on_del_button_clicked();

private:
    Ui::ListAddingDialog *ui;

    QPushButton *numButtons[10];
    int priceVal{};
    bool isAdd = false;
    bool isSubtract = false;
    bool isMultiply = false;
    bool isDivide = false;
};

#endif // LISTADDINGDIALOG_H
