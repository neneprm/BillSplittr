#include "listaddingdialog.h"
#include "ui_listaddingdialog.h"

ListAddingDialog::ListAddingDialog(QWidget *parent, QString listName) :
    QDialog(parent),
    ui(new Ui::ListAddingDialog)
{
    ui->setupUi(this);
    ui->listNameInput_label->setText(listName);
    ui->priceInput->setText(QString::number(priceVal));
    for(int i{0}; i <= 10; ++i)
    {
        QString butName = "button" + QString::number(i);
        numButtons[i] = ListAddingDialog::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(clicked()), this, SLOT(on_num_button_clicked()));
    }
    connect(ui->divide_button, SIGNAL(clicked()), this, SLOT(on_math_button_clicked()));
    connect(ui->multiply_button, SIGNAL(clicked()), this, SLOT(on_math_button_clicked()));
    connect(ui->minus_button, SIGNAL(clicked()), this, SLOT(on_math_button_clicked()));
    connect(ui->plus_button, SIGNAL(clicked()), this, SLOT(on_math_button_clicked()));
}

ListAddingDialog::~ListAddingDialog()
{
    delete ui;
}

void ListAddingDialog::on_num_button_clicked()
{
    QPushButton *button = (QPushButton *)sender();
    QString buttonVal = button->text();
    QString getPriceVal = ui->priceInput->text();
    if(getPriceVal.toInt() == 0)
    {
        ui->priceInput->setText(buttonVal);
    }
    else
    {
        QString enterNum = getPriceVal + buttonVal;
        int currentPrice = enterNum.toInt();
        ui->priceInput->setText(QString::number(currentPrice));
    }
}

void ListAddingDialog::on_math_button_clicked()
{
    QString getPriceVal = ui->priceInput->text();
    priceVal = getPriceVal.toInt();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal, "÷", Qt::CaseInsensitive) == 0)
    {
        isDivide = true;
    }
    else if(QString::compare(butVal, "×", Qt::CaseInsensitive) == 0)
    {
        isMultiply = true;
    }
    else if(QString::compare(butVal, "−", Qt::CaseInsensitive) == 0)
    {
        isSubtract = true;
    }
    else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0)
    {
        isAdd = true;
    }
    ui->priceInput->setText("");
}

void ListAddingDialog::on_equal_button_clicked()
{
    QString getPriceVal = ui->priceInput->text();
    int currentPrice = getPriceVal.toInt();
    if(isDivide || isMultiply || isSubtract || isAdd)
    {
        if(isDivide)
        {
            priceVal += currentPrice;
        }
        else if(isMultiply)
        {
            priceVal *= currentPrice;
        }
        else if(isSubtract)
        {
            priceVal -= currentPrice;
        }
        else if(isAdd)
        {
            priceVal += currentPrice;
        }
    }
    ui->priceInput->setText(QString::number(priceVal));
}

void ListAddingDialog::on_del_button_clicked()
{
    ui->priceInput->backspace();
}
