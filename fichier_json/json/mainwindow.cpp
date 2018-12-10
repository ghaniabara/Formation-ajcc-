#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QJsonDocument>
#include <QSettings>
#include <QJsonArray>
#include <QJsonObject>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_manager = new QNetworkAccessManager(this);

    m_request.setUrl(QUrl("https://public.opendatasoft.com/api/records/1.0/search/?dataset=evenements-publics-cibul&facet=tags&facet=placename&facet=department&facet=region&facet=city&facet=date_start&facet=date_end&facet=pricing_info&facet=updated_at&facet=city_district"));
    m_request.setRawHeader("User-Agent", "MyOwnBrowser 1.0");
    connect(m_manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(reponseRecue(QNetworkReply *)));
    m_reply = m_manager->get(m_request);
    connect(m_reply, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));
    connect(m_reply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(slotError(QNetworkReply::NetworkError)));
    connect(m_reply, SIGNAL(sslErrors(QList<QSslError>)), this, SLOT(slotSslErrors(QList<QSslError>)));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::reponseRecue(QNetworkReply *)
{

    qDebug()<< "reponseRecue";
}

void MainWindow::slotReadyRead()
{
    //qDebug()<< "slotReadyRead";
    //qDebug()<<m_reply->readAll();

    ui->textEdit->append(QString(m_reply->readAll()));
//###################################################################################################

    QStringList city;
    //QStringList title;

    QString strReply = (QString)m_reply->readAll();
    QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8());
    QJsonObject jsonObject = jsonResponse.object();
    QJsonArray jsonArray = jsonObject["evenements-publics-cibul"].toArray();

    foreach (const QJsonValue & value, jsonArray) {
        QJsonObject obj = value.toObject();
        city.append(obj["city"].toString());

    }

//###################################################################################################

}

void MainWindow::slotError(QNetworkReply::NetworkError erreurtype)
{

    QString m_message;
    if (erreurtype == QNetworkReply::NoError) { return; }
    else { m_message = QString("Erreur"); }
    qDebug()<< "Erreur";
}

void MainWindow::slotSslErrors(QList<QSslError>)
{
    qDebug()<< "slotSslErrors";
}
