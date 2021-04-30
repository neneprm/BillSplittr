#ifndef LIST_H
#define LIST_H

#include "payer.h"
#include <QString>

class List
{
private:
    QString listName;
    int price;

public:
    List(QString listName = "", int price = 0);
};

#endif // LIST_H
