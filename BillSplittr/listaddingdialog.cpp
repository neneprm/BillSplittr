#include "listaddingdialog.h"
#include "ui_listaddingdialog.h"

ListAddingDialog::ListAddingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListAddingDialog)
{
    ui->setupUi(this);
}

ListAddingDialog::~ListAddingDialog()
{
    delete ui;
}
