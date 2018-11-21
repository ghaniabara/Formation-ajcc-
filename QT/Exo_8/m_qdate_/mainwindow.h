#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QDateEdit>
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
    void print(int i);
private:
    Ui::MainWindow *ui;
   // QDateEdit *m_date;
};

#endif // MAINWINDOW_H
