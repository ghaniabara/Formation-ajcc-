#include "fontbutton.h"
#include <QPushButton>
#include <QFontDialog>

FontButton::FontButton(QWidget *parent) : QPushButton(parent)
{
 connect(this, SIGNAL(clicked(bool)), this, SLOT(change_font()));
}

void FontButton::change_font()
{
    bool ok;
    m_font = QFontDialog::getFont(&ok, QFont("Helvetica [Cronyx]", 10), this);

}
