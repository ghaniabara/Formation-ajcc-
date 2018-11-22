#include <QCoreApplication>
#include<QDebug>
#include<QDir>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //qDebug ()<< QDir::homePath();

    QDir d;
    d.homePath();
    qDebug()<<d.homePath();

    return a.exec();
}

