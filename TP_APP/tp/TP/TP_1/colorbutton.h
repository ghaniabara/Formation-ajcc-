#ifndef COLORBUTTON_H
#define COLORBUTTON_H
#include <QPushButton>

namespace Ui {
class ColorButton;

}
class ColorButton : public QPushButton
{
    Q_OBJECT

public:
    ColorButton(QWidget *parent);

private slots:
    void change_color();
private:
    QColor m_color;
    void paintEvent(QPaintEvent *ev);


};

#endif // COLORBUTTON_H
