#include "payer.h"

Payer::Payer(QString name, int pay_amount)
{
    this->name = name;
    this->pay_amount = pay_amount;
    nameLabel = new QLabel();
    payLabel = new QLabel();
    nameLabel->setText(name);
    payLabel->setText(QString::number(pay_amount));
}

void Payer::amountPerPerson(int calcPrice)
{
    pay_amount += calcPrice;
    payLabel->setText(QString::number(pay_amount));

}

QString Payer::getName()
{
    return name;
}
