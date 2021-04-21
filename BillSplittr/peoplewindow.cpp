#include "peoplewindow.h"
#include "ui_peoplewindow.h"

PeopleWindow::PeopleWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PeopleWindow)
{
    ui->setupUi(this);
}

PeopleWindow::~PeopleWindow()
{
    delete ui;
}
