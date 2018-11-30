#ifndef FONTBUTTON_H
#define FONTBUTTON_H
#include <QPushButton>

namespace Ui {

class FontButton;

}

class FontButton : public QPushButton
{
    Q_OBJECT

public:
    FontButton(QWidget *parent);
    QFont m_font;

private slots:
    void change_font();

};

#endif // FONTBUTTON_H
