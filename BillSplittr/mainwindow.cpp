#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nameAdd_button_clicked()
{
//   QVBoxLayout *vLay = new QVBoxLayout(ui->name_scrollAreaWidgetContents);
//   QHBoxLayout *hLay = new QHBoxLayout(ui->name_scrollAreaWidgetContents);
   if(ui->nameInput->text() != nullptr){

   QLabel *name = new QLabel();
   name->setText(ui->nameInput->text());
   name->setAlignment(Qt::AlignLeft);
   ui->nameInput->clear();

//   QLabel *pay = new QLabel();
//   pay->setText("0");
//   pay->setAlignment(Qt::AlignRight);

   ui->name_scrollAreaWidgetContents->layout()->addWidget(name);
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
