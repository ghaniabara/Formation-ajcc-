#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QPainter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     void paintEvent(QPaintEvent *ev);

private:
    Ui::MainWindow *ui;
    QPixmap *pixmap;
    QPainter *painter;
};

#endif // MAINWINDOW_H
