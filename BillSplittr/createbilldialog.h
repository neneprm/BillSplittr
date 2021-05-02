#ifndef CREATEBILLDIALOG_H
#define CREATEBILLDIALOG_H

#include <QDialog>

namespace Ui {
class CreateBillDialog;
}

class CreateBillDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateBillDialog(QWidget *parent = nullptr);
    ~CreateBillDialog();

private:
    Ui::CreateBillDialog *ui;
};

#endif // CREATEBILLDIALOG_H
