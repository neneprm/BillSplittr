#include "payer.h"

Payer::Payer(QString name, int pay_amount)
{
    this->name = name;
    this->pay_amount = pay_amount;
}

void Payer::amountPerPerson(int calcPrice)
{
    pay_amount += calcPrice;
}
