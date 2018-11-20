#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   ui->lineEditPrenom->setDisabled(true);
   ui->lineEditVille->setDisabled(true);
   //ui->lineEditPrenom->setText("Ghania");

}
