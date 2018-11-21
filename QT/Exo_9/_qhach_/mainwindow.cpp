#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QComboBox>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList prenom;
    prenom<< "" << "Romain" << "Robert" << "Remy";
    ui->comboBox->addItems(prenom);

    MY_HASH["Romain"] = 18;
    MY_HASH["Robert"] = 20;
    MY_HASH["Remy"] = 25;

    connect(ui->comboBox,SIGNAL(currentIndexChanged(QString)), this, SLOT(print(QString)));
    connect(ui->pushButton,SIGNAL(clicked()), this, SLOT(close()));


    //Hash age=ui->lineEdit->MY_HASH.value(int);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::print(QString val)
{

    ui->lineEdit->setText(QString("%1 ans").arg(MY_HASH[val]));

            //qDebug()<<MY_HASH[val];

}

