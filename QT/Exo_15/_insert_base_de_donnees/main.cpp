#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ghania/base.db");//QDir::homePath()+"/france2016");
    bool ok = db.open();
    return a.exec();
}
