#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QStringList>
#include <QString>
#include <QRegExp>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString chemin(QDir::homePath());

    QDir dir(chemin);

    QStringList file;
    file << "*.txt" << "*.cpp" << "*.cp1" << "*.h";
    QStringList d = dir.entryList(file, QDir::Files);

    foreach (const QString &f, d)
    {
        QRegExp exp("(\\.\\w{3}$)");

        if (f.contains(exp))
           //QString fichiers = exp.cap(1);
        qDebug() << f;
    }

    return a.exec();
}
