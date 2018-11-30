#include "colorbutton.h"
#include <QColorDialog>
#include <QPainter>
#include <QBrush>

ColorButton::ColorButton(QWidget *parent) : QPushButton (parent)
{
 connect(this, SIGNAL(clicked(bool)), this, SLOT(change_color()));
 m_color = (Qt::green);
}

void ColorButton::change_color()
{
    m_color = QColorDialog::getColor(m_color, this, tr("sélectionner la couleur"));
}

void ColorButton::paintEvent(QPaintEvent *ev)
{
    QPushButton::paintEvent(ev);
    QPainter painter(this);
    QBrush brush(m_color);
    QPen pen(m_color);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(0+4,0+4,width()-8,height()-8);
}


