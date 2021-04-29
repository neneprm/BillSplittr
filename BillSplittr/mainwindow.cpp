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

   QLabel *name = new QLabel();
   name->setText(ui->nameInput->text());
   name->setAlignment(Qt::AlignLeft);
   ui->nameInput->clear();

//   QLabel *pay = new QLabel();
//   pay->setText("0");
//   pay->setAlignment(Qt::AlignRight);

   ui->name_scrollAreaWidgetContents->layout()->addWidget(name);

//   hLay->addWidget(name);
//   hLay->addWidget(pay);

//   ui->name_scrollAreaWidgetContents->layout()->addItem(hLay);
//   vLay->addLayout(hLay);
//   ui->name_scrollAreaWidgetContents->setLayout(vLay);
}
