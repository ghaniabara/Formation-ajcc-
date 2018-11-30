#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->pushButtonOk, this, SIGNAL(clicked()), this, SLOT(close()));

    ui->pushButton->setColor(Qt::red);

}

MainWindow::~MainWindow()
{
    delete ui;
}

