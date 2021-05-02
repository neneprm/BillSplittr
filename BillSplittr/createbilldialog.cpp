#include "createbilldialog.h"
#include "ui_createbilldialog.h"

CreateBillDialog::CreateBillDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateBillDialog)
{
    ui->setupUi(this);
}

CreateBillDialog::~CreateBillDialog()
{
    delete ui;
}
