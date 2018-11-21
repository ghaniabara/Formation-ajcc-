#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDateEdit>
#include<QDate>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDate date(1986,06,25);
    ui->dateEdit->setDate(date);

    connect(ui->spinBox,SIGNAL(valueChanged(int)), this, SLOT(print(int)));
    connect(ui->pushButton,SIGNAL(clicked()), this, SLOT(close()));

 }
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::print(int val)
{

     QDate d= ui->dateEdit->date();

     ui->spinBox->value();
     ui->spinBox->setRange(-1000, +1000); //on peut le mettre dans le Design->propriétés

     QDate datenew = ui->dateEdit->date().addDays(val);
     ui->label_4->setText(datenew.toString());
}
