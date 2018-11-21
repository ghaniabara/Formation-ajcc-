#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QHash>
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
    void print(QString);


private:
    Ui::MainWindow *ui;
    QHash <QString , int>MY_HASH;
};

#endif // MAINWINDOW_H
