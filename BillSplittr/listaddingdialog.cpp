#include "listaddingdialog.h"
#include "ui_listaddingdialog.h"

ListAddingDialog::ListAddingDialog(QWidget *parent, QString listName) :
    QDialog(parent),
    ui(new Ui::ListAddingDialog)
{
    ui->setupUi(this);
    ui->listNameInput_label->setText(listName);
    ui->priceInput->setText(QString::number(priceVal));
    ui->priceInput->setReadOnly(true);

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

void ListAddingDialog::setPayerList(QVector<Payer *> list)
{
    payerList = list;
    setNameList();
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

void ListAddingDialog::setNameList()
{
    nameGridLayout = new QGridLayout(ui->nameList_scrollAreaWidgetContents);
    for (int i{0}; i<payerList.size(); i++)
    {
        QPushButton *nameButton = new QPushButton(payerList.at(i)->getName(), this);
        nameButton->setStyleSheet("QPushButton{font: 14px;font: bold; color: #0f4c75; border: solid; border-radius: 6px; border-color: #0f4c75; border-width: 2px;}"
                                  "QPushButton:checked{background-color: #0f4c75; color: #f6f5f5; border: outset; border-radius: 6px;}");
        nameButton->setFixedSize(QSize(280,30));
        nameButton->setCheckable(true);
        nameGridLayout->setSpacing(1);
        nameGridLayout->addWidget(nameButton,i,0,Qt::AlignCenter);
        nameButtonList.push_back(nameButton);
    }
}

void ListAddingDialog::on_selectAll_button_clicked()
{
    for (int i{0}; i<nameButtonList.size(); i++)
    {
        nameButtonList.at(i)->setChecked(true);

    }
}
