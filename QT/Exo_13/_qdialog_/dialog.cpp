#include "dialog.h"
#include "ui_dialog.h"
#include <QSettings>
#include <QString>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);


    connect(ui->pushButtonOK, SIGNAL(clicked()), this, SLOT(option()));



    connect(ui->pushButtonAnnuler, SIGNAL(clicked()), this, SLOT(close()));

    connect(ui->fontComboBox,SIGNAL(currentFontChanged(QFont)), this, SLOT(option()));
    connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(option()));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::option()
{

    QFont font;
    font.setFamily(ui->fontComboBox->currentText());
    font.setPointSize( ui->spinBox->value());
    //setFont(font);


    s.setValue("Police/taille",ui->spinBox->value());
    s.value("taille").toInt();

    s.setValue("Police/Famille", ui->fontComboBox->currentText());
    s.value("Famille").toString();

    this->setFont(font);
    QFont MyFont = this->font();

    emit FontModified(MyFont, ui->spinBox->value());

}

//void Dialog::change_Familly(QString)

//{
//    QFont f;
//    f.setFamily(ui->fontComboBox->currentText());
//    f.setPointSize(ui->spinBox->value());
//    this->setFont(f);

//}
