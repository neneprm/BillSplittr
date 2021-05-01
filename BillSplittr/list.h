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
};

#endif // LIST_H
