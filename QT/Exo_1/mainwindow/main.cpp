#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
    //return (0); //IL NE SE PASSE RIEN C'EST POUR CA ON A MIT "return a.exec();" POUR ATTENDRE LA FIN DE L'APPLICATION
}
