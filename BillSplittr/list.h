#ifndef LIST_H
#define LIST_H

#include <QString>
#include <QLabel>

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
    int getPrice() const;
};

#endif // LIST_H
