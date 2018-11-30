#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ghania/base.db");//QDir::homePath()+"/france2016");
    bool ok = db.open();

    MainWindow w;
    w.show();

    return a.exec();
}
