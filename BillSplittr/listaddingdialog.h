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
    explicit ListAddingDialog(QWidget *parent = nullptr);
    ~ListAddingDialog();

private:
    Ui::ListAddingDialog *ui;
};

#endif // LISTADDINGDIALOG_H
