#include "listaddingdialog.h"
#include "ui_listaddingdialog.h"

ListAddingDialog::ListAddingDialog(QWidget *parent, QString listName) :
    QDialog(parent),
    ui(new Ui::ListAddingDialog)
{
    ui->setupUi(this);
    ui->listNameInput_label->setText(listName);
}

ListAddingDialog::~ListAddingDialog()
{
    delete ui;
}
