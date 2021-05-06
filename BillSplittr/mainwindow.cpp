#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    payerGridLayout = new QGridLayout(ui->name_scrollAreaWidgetContents);
    listGridLayout = new QGridLayout(ui->list_scrollAreaWidgetContents);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Clear data in the layout
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

// Add new list into data
void MainWindow::addItemtoList(List *list)
{
    itemList.push_back(list);

    // Initialize list in widget
    listGridLayout->addWidget(list->listLabel,0,0, Qt::AlignLeft);
    listGridLayout->addWidget(list->priceLabel,0,1, Qt::AlignCenter);
    listGridLayout->addWidget(list->perPersonLabel,0,2, Qt::AlignRight);
}

// Add new payer into the program
void MainWindow::on_nameAdd_button_clicked()
{
   if(ui->nameInput->text() != nullptr)
   {
       Payer *payer = new Payer(ui->nameInput->text());
       ui->nameInput->clear();
       payerList.push_back(payer);

       // Update payer in widget
       payerGridLayout->addWidget(payer->nameLabel,numPayer,0,Qt::AlignLeft);
       payerGridLayout->addWidget(payer->payLabel,numPayer,1,Qt::AlignRight);

       // Add number of payer and update
       numPayer += 1;
       ui->numPeople->setText(QString::number(numPayer));
   }
}

// Add new list into the program
void MainWindow::on_listAdd_button_clicked()
{
    if(ui->listInput->text() != nullptr)
    {
        // Open list adding dialog
        listAddingDialog = new ListAddingDialog(this, ui->listInput->text());
        listAddingDialog->setPayerList(payerList);
        listAddingDialog->show();

        // Initialize new list and update total
        List *list = new List(ui->listInput->text());
        ui->listInput->clear();
        itemList.push_back(list);
        listAddingDialog->setItem(list);
        listAddingDialog->setTotal(ui->totalPrice);

        // Update list in widget
        listGridLayout->addWidget(list->listLabel,itemList.size(),0, Qt::AlignLeft);
        listGridLayout->addWidget(list->priceLabel,itemList.size(),1, Qt::AlignCenter);
        listGridLayout->addWidget(list->perPersonLabel,itemList.size(),2, Qt::AlignRight);
    }
}

// Clear all name and reset list
void MainWindow::on_clearAllName_button_clicked()
{
    numPayer = 0;
    ui->numPeople->setText(QString::number(numPayer));
    payerList.clear();
    clearLayout(payerGridLayout);
    on_clearAllList_button_clicked();
}

// Clear all list and reset price for each payer
void MainWindow::on_clearAllList_button_clicked()
{
    ui->totalPrice->setText("0");
    itemList.clear();
    clearLayout(listGridLayout);

    for(int i{0}; i < payerList.size(); i++)
    {
        payerList.at(i)->resetPrice();
    }
}

// Open create bill dialog and sync all information to summarize the bill
void MainWindow::on_createBill_button_clicked()
{
    if(itemList.size() != 0 && payerList.size() != 0)
    {
        createBillDialog = new CreateBillDialog();
        createBillDialog->setBill(payerList,itemList);
        createBillDialog->show();

        this->close();
    }
}
