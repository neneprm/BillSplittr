#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    payerGridLayout = new QGridLayout(ui->name_scrollAreaWidgetContents);
    listGridLayout = new QGridLayout(ui->list_scrollAreaWidgetContents);

//    addItemtoList(list);
}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::addItemtoList(List *list)
{
    itemList.push_back(list);
    //Add widget
    listGridLayout->addWidget(list->listLabel,0,0, Qt::AlignLeft);
    listGridLayout->addWidget(list->priceLabel,0,1, Qt::AlignRight);
    listGridLayout->addWidget(list->perPersonLabel,0,2, Qt::AlignRight);
}

void MainWindow::on_nameAdd_button_clicked()
{
   if(ui->nameInput->text() != nullptr)
   {
       Payer *payer = new Payer(ui->nameInput->text());
       ui->nameInput->clear();
       payerList.push_back(payer);
       //qDebug() << "Add payer to vector";

       //Add payer Label
       payerGridLayout->addWidget(payer->nameLabel,numPayer,0,Qt::AlignLeft);
       payerGridLayout->addWidget(payer->payLabel,numPayer,1,Qt::AlignRight);

       //Add num Payer
       numPayer += 1;
       ui->numPeople->setText(QString::number(numPayer));
   }
}

void MainWindow::on_listAdd_button_clicked()
{
    if(ui->listInput->text() != nullptr)
    {
        listAddingDialog = new ListAddingDialog(this, ui->listInput->text());
        listAddingDialog->setPayerList(payerList);
        listAddingDialog->show();

        List *list = new List(ui->listInput->text());
        ui->listInput->clear();
        itemList.push_back(list);
        listAddingDialog->setItem(list);
        listAddingDialog->setTotal(ui->totalPrice);

        listGridLayout->addWidget(list->listLabel,itemList.size(),0, Qt::AlignLeft);
        listGridLayout->addWidget(list->priceLabel,itemList.size(),1, Qt::AlignCenter);
        listGridLayout->addWidget(list->perPersonLabel,itemList.size(),2, Qt::AlignRight);
    }
}

void MainWindow::on_clearAllName_button_clicked()
{
    numPayer = 0;
    ui->numPeople->setText(QString::number(numPayer));
    payerList.clear();
    clearLayout(payerGridLayout);
}
