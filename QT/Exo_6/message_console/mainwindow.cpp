#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEditmsg,SIGNAL(editingFinished()), this, SLOT(print()));  // créer mon slot print(
    //connect(ui->lineEditmsg,SIGNAL(textChanged(QString)), this, SLOT(print()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::print()
{

    qDebug()<<ui->lineEditmsg->text().toUpper();

}
