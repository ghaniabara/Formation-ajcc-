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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void ouvrir();
    void dialogue();
    void save();


private:
    Ui::MainWindow *ui;
    QString test;
};

#endif // MAINWINDOW_H
