#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QAction>
#include"dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->action_A_propos, SIGNAL(triggered()), this, SLOT(dialogue()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dialogue()
{
    Dialog *fenetre= new Dialog(this); //superposer les deux fenetres

    //Dialog *fenetre= new Dialog(); //séparer les deux fenetres

    //fenetre->exec() ;


    fenetre->show() ;
}
