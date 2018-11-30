#ifndef COLORBUTTON_H
#define COLORBUTTON_H
#include <QColorDialog>

#include <QPushButton>

namespace Ui {
class ColorButton;
}

class ColorButton : public QPushButton
{
    Q_OBJECT
public:
    ColorButton(QWidget *parent);
    QColor getColor();
    void setColor(QColor color);

private slots:
    void change_color();


private:
    QColor color;
    void paintEvent(QPaintEvent *ev);
};

#endif // COLORBUTTON_H
