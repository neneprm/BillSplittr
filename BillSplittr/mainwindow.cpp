#include "mainwindow.h"
#include "ui_mainwindow.h"

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
      // QHBoxLayout *payerRow = new QHBoxLayout(ui->name_scrollAreaWidgetContents);
       Payer *payer = new Payer(ui->nameInput->text());

       ui->nameInput->clear();
       //add payer Label
       payerGridLayout->addWidget(payer->nameLabel,numPayer,0,Qt::AlignLeft);
       payerGridLayout->addWidget(payer->payLabel,numPayer,1,Qt::AlignRight);

       //ui->name_scrollAreaWidgetContents->layout()->addWidget(vLay);
       //ui->name_scrollAreaWidgetContents->setLayout();

       //add num Payer
       numPayer += 1;
       ui->numPeople->setText(QString::number(numPayer));

//   hLay->addWidget(name);
//   hLay->addWidget(pay);

//   ui->name_scrollAreaWidgetContents->layout()->addItem(hLay);
//   vLay->addLayout(hLay);
//   ui->name_scrollAreaWidgetContents->setLayout(vLay);
   }
}

void MainWindow::on_listAdd_button_clicked()
{
    listAddingDialog = new ListAddingDialog(this, ui->listInput->text());
    listAddingDialog->show();
}
