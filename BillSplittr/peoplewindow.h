#ifndef PEOPLEWINDOW_H
#define PEOPLEWINDOW_H

#include <QWidget>

namespace Ui {
class PeopleWindow;
}

class PeopleWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PeopleWindow(QWidget *parent = nullptr);
    ~PeopleWindow();

private:
    Ui::PeopleWindow *ui;
};

#endif // PEOPLEWINDOW_H
