#include "list.h"

List::List(QString listName, int price,int perPerson)
{
    this->listName = listName;
    this->price = price;
    this->perPerson = perPerson;

    listLabel = new QLabel();
    priceLabel = new QLabel();
    perPersonLabel = new QLabel();
    listLabel->setText(listName);
    priceLabel->setText(QString::number(price));
    perPersonLabel->setText(QString::number(perPerson));
}

void List::setNewPrice(int newPrice)
{
    this->price = newPrice;
    this->priceLabel->setText(QString::number(newPrice));
}

void List::setNewPerPerson(int newPerPerson)
{
    this->perPerson = newPerPerson;
    this->perPersonLabel->setText(QString::number(newPerPerson));
}

int List::getPrice() const
{
    return price;
}
