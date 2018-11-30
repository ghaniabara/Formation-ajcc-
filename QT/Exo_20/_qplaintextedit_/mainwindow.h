#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //void PaintEvent(QPaintEvent *ev) override; // override alerte quand le nom de notre methode virtuelle n'a pas le même nom
    void paintEvent(QPaintEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void mouseDoubleClickEvent(QMouseEvent *ev);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
