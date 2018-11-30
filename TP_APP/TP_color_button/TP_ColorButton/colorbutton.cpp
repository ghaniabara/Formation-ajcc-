#include "colorbutton.h"
#include <QColorDialog>
#include <QPixmap>
#include <QPainter>
#include <QDebug>


ColorButton::ColorButton(QWidget *parent):QPushButton(parent)

{
    connect(this, SIGNAL(clicked(bool)), this, SLOT(change_color()));
    color = (Qt::green);
    //this->setColor(Qt::green);

}

QColor ColorButton::getColor()
{
    return color;
}

void ColorButton::setColor(QColor col)
{
    color=col;
}


void ColorButton::change_color()
{

    color = QColorDialog::getColor(color, this, tr("Sélectionner une couleur"));

}

void ColorButton::paintEvent(QPaintEvent *ev)
{


    QPushButton::paintEvent(ev);

    QPainter painter(this);
    //qDebug()<<color;
    QBrush brush(color);
    QPen pen(color);
    painter.setPen(pen);
    painter.setBrush(brush);

    painter.drawRect(0+4,0+4,width()-8,height()-8);

}




