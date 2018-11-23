#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void ouvrir();
    void dialogue();
    void save();
    void modify(QFont MyFont, int size);


private:
    Ui::MainWindow *ui;
    QString test;
    Dialog *m_fenetre;
};

#endif // MAINWINDOW_H
