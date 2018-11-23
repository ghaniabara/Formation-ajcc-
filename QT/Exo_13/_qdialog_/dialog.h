#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSettings>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void option();
   // void change_Familly(QString);

private:
    Ui::Dialog *ui;
    QSettings s;
signals:
    void FontModified(QFont MyFont,  int size);
};

#endif // DIALOG_H
