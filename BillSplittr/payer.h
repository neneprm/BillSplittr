#ifndef PAYER_H
#define PAYER_H

#include <QString>

class Payer
{
private:
    QString name;
    int pay_amount;

public:
    Payer(QString name = "", int pay_amount = 0);
    void amountPerPerson(int calcPrice);
};

#endif // PAYER_H
