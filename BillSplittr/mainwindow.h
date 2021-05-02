#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "payer.h"
#include "list.h"
#include "listaddingdialog.h"

#include <QMainWindow>
#include <QLabel>
#include <QGridLayout>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void addItemtoList(List *item);

private slots:
    void on_nameAdd_button_clicked();
    void on_listAdd_button_clicked();
    void on_clearAllName_button_clicked();

private:
    Ui::MainWindow *ui;

    ListAddingDialog *listAddingDialog;
    QLabel *listNameInput_label;
    QGridLayout *payerGridLayout;
    QGridLayout *listGridLayout;
    QVector<Payer*> payerList;
    QVector<List*> itemList;
    int numPayer{0};
    int total{0};

    void clearLayout(QLayout *layout);
};
#endif // MAINWINDOW_H
