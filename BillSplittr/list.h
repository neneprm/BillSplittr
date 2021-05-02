#ifndef LIST_H
#define LIST_H

#include "payer.h"
#include <QString>

class List
{
private:
    QString listName;
    int price;
    int perPerson;

public:
    List(QString listName = "", int price = 0,int perPerson = 0);

    QLabel *listLabel;
    QLabel *priceLabel;
    QLabel *perPersonLabel;

    void setNewPrice(int newPrice);
    void setNewPerPerson(int newPerPerson);
};

#endif // LIST_H
