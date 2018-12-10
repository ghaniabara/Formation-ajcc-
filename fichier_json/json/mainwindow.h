#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtNetwork/QNetworkReply>

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
    void reponseRecue(QNetworkReply *);
    void slotReadyRead();
    void slotError(QNetworkReply::NetworkError erreurtype);
    void slotSslErrors(QList<QSslError>);

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *m_manager;
    QNetworkReply *m_reply;
    QNetworkRequest m_request;
};

#endif // MAINWINDOW_H
