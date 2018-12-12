#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QNetworkReply>
#include <QMainWindow>

#include <QString>
#include <QJsonDocument>
#include <QSettings>
#include <QJsonArray>
#include <QJsonObject>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString latitude = "48.871673";
    QString longitude = "2.346115";
    QString radius = "500";


private slots:
    void reponseRecue(QNetworkReply *);
    void slotReadyRead();
    void slotError(QNetworkReply::NetworkError erreurtype);
    void slotSslErrors(QList<QSslError>);

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *m_manager;
    QNetworkReply *m_reply;
    QNetworkRequest m_request;
    QJsonDocument json;
};

#endif // MAINWINDOW_H
