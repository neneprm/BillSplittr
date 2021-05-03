#ifndef CREATEBILLDIALOG_H
#define CREATEBILLDIALOG_H

#include "payer.h"
#include "list.h"

#include <QDialog>
#include <QDateTime>
#include <QVector>
#include <QGridLayout>

namespace Ui {
class CreateBillDialog;
}

class CreateBillDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateBillDialog(QWidget *parent = nullptr);
    ~CreateBillDialog();

    void setBill(QVector<Payer*> payerPtr, QVector<List*> listPtr);

private:
    Ui::CreateBillDialog *ui;

    QGridLayout *payerGrid;
    QGridLayout *itemGrid;

    void setPayerBill(QVector<Payer*> payerPtr);
    void setItemBill(QVector<List*> listPtr);

};

#endif // CREATEBILLDIALOG_H
