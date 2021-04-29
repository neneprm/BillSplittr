#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    payerGridLayout = new QGridLayout(ui->name_scrollAreaWidgetContents);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nameAdd_button_clicked()
{
   if(ui->nameInput->text() != nullptr)
   {
       Payer *payer = new Payer(ui->nameInput->text());
       ui->nameInput->clear();
       payerList.push_back(payer);
       qDebug() << "add  payer to vector";

       //add payer Label
       payerGridLayout->addWidget(payer->nameLabel,numPayer,0,Qt::AlignLeft);
       payerGridLayout->addWidget(payer->payLabel,numPayer,1,Qt::AlignRight);

       //add num Payer
       numPayer += 1;
       ui->numPeople->setText(QString::number(numPayer));
   }
}

void MainWindow::on_listAdd_button_clicked()
{
    listAddingDialog = new ListAddingDialog(this, ui->listInput->text());
    listAddingDialog->show();
}

void MainWindow::on_clearAllName_button_clicked()
{
    numPayer = 0;
    ui->numPeople->setText(QString::number(numPayer));
    payerList.clear();
    clearLayout(payerGridLayout);

}

void MainWindow::clearLayout(QLayout *layout)
{
    QLayoutItem *item;
    while((item = layout->takeAt(0)))
    {
        if (item->layout())
        {
            clearLayout(item->layout());
            delete item->layout();
        }
        if (item->widget())
        {
            delete item->widget();
        }
        delete item;
    }
}
