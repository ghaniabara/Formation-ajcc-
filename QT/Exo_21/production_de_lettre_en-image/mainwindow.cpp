#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPaintEvent>
#include <QPainter>
#include <QRectF>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pixmap = new QPixmap(30,30);
    painter= new QPainter(pixmap);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *ev)
{
  int i=0;

 for(i=33; i<=126; i++)
    QChar (m_value);

    QPainter painter(this);
    // Création du pixmap
    pixmap->fill(Qt::transparent);
    // Définition du stylo et de la brosse
    QColor black(Qt::black);QColor red(Qt::green);

    QPen pen(black);
    QBrush brush(red);
    // C'est sur le painter qu'on applique une ligne
    painter.setPen(pen);
    painter.setBrush(brush);
    QRectF rectangle (100, 80, 150.0, 100.0);
    painter.drawRoundRect(rectangle, 50, 50);

    painter.drawText(rectangle, Qt::AlignCenter, tr("a"));
    painter.end();
    // Une fois la painter fermé on sauve le pixmap dans un fichier
    pixmap->save("fichier.png");
}
