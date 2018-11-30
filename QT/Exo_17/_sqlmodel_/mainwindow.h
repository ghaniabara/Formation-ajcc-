#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlTableModel>

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
    void AfficheInfo(QModelIndex);


private:
    Ui::MainWindow *ui;
    QSqlTableModel *m_model;

};

#endif // MAINWINDOW_H
