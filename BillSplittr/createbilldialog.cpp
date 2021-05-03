#include "createbilldialog.h"
#include "ui_createbilldialog.h"

CreateBillDialog::CreateBillDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateBillDialog)
{
    ui->setupUi(this);
    payerGrid = new QGridLayout(ui->billName_scrollAreaWidgetContents);
    itemGrid = new QGridLayout(ui->billList_crollAreaWidgetContents);
    ui->dateTime->setDateTime(QDateTime::currentDateTime());
}

CreateBillDialog::~CreateBillDialog()
{
    delete ui;
}

void CreateBillDialog::setBill(QVector<Payer *> payerPtr, QVector<List *> listPtr)
{
    setPayerBill(payerPtr);
    setItemBill(listPtr);
    ui->numPeople->setText(QString::number(payerPtr.size()));

    int sumTotal{0};

    for(int i{0}; i < listPtr.size(); i++)
    {
        sumTotal += listPtr.at(i)->getPrice();
    }
    ui->total->setText(QString::number(sumTotal));
}

void CreateBillDialog::setPayerBill(QVector<Payer *> payerPtr)
{
    for(int i{0}; i < payerPtr.size(); i++)
    {
        payerGrid->addWidget(payerPtr.at(i)->nameLabel,i,0,Qt::AlignLeft);
        payerGrid->addWidget(payerPtr.at(i)->payLabel,i,1,Qt::AlignRight);
    }
}

void CreateBillDialog::setItemBill(QVector<List *> listPtr)
{
    for(int i{0};i < listPtr.size(); i++)
    {
        itemGrid->addWidget(listPtr.at(i)->listLabel,i,0,Qt::AlignLeft);
        itemGrid->addWidget(listPtr.at(i)->priceLabel,i,1,Qt::AlignCenter);
        itemGrid->addWidget(listPtr.at(i)->perPersonLabel,i,2,Qt::AlignRight);
    }
}
