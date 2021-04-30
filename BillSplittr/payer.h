#ifndef PAYER_H
#define PAYER_H

#include <QString>
#include <QLabel>

class Payer
{
private:
    QString name;
    int pay_amount;

public:
    Payer(QString name = "", int pay_amount = 0);

    QLabel *nameLabel;
    QLabel *payLabel;
    QString getName();

    void amountPerPerson(int calcPrice);
};

#endif // PAYER_H
