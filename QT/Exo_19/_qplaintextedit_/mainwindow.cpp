#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMouseEvent>
#include <QPainter>

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

//void MainWindow::PaintEvent(QPaintEvent *ev)  voir .h (override)
void MainWindow::paintEvent(QPaintEvent *ev)
{
    //qDebug()<<this->width()<<this->height();
    QPainter painter(this); // le painter ne se remet que dans le Paintvent
    painter.drawLine(0,0,2000,2000);
}

//void MainWindow::mousePressEvent(QMouseEvent *ev)
//{
//    if ( ev->pos().y() > this->height()-30 )
     //{ //coucou }
//     qDebug()<<"coucou";
//}

void MainWindow::mousePressEvent(QMouseEvent *ev)
{
    if ( ev->button()==Qt::LeftButton)
     //{ //coucou }
     qDebug()<<"bonjour";
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *ev)
{
    //"hola";
   // emit DoubleClicked();
    qDebug()<<"message double clicked";
}


