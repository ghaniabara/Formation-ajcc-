#include "mainwindow.h"
#include <QApplication>
#include <QCoreApplication>
#include <QSettings>
#include <QString>

int main(int argc, char *argv[])
{

    QCoreApplication::setOrganizationDomain("EXO12");
    QCoreApplication::setApplicationName("exo12");
    QSettings settings;

    QApplication a(argc, argv);
    QFont font;


    font.setFamily(settings.value("Police/Famille").toString());
    font.setPointSize(settings.value("Police/taille").toInt());
    a.setFont(font);
    MainWindow w;
    w.show();



    return a.exec();
}
      // returns 0
