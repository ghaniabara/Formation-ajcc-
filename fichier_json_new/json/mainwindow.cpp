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

    connect(m_manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(reponseRecue(QNetworkReply *)));
    connect(m_reply, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));
    connect(m_reply, SIGNAL(error(QNetworkReply::NetworkError)), this, SLOT(slotError(QNetworkReply::NetworkError)));
    connect(m_reply, SIGNAL(sslErrors(QList<QSslError>)), this, SLOT(slotSslErrors(QList<QSslError>)));
    connect(ui->pushButtonEnter, SIGNAL(clicked()), this, SLOT(slotReadyRead()));
    connect(ui->pushButtonExit, SIGNAL(clicked()), this, SLOT(close()));

    qDebug() << latitude << endl;
    qDebug() << longitude << endl;
    qDebug() << radius << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::reponseRecue(QNetworkReply *)
{

    qDebug()<< "reponseRecue";

    QByteArray m_response = m_reply->readAll();
    qDebug()<< "bytearry" << m_response.isEmpty() <<endl;

    json = QJsonDocument::fromJson(m_response);
    qDebug() << "mon json" << json.isEmpty() <<endl;

    QString strJson(json.toJson(QJsonDocument::Indented)); // Indented or Compact
    qDebug() << "strJson" << strJson.isEmpty() <<endl;
    ui->textEdit->append(strJson);
}

void MainWindow::slotReadyRead()
{
    // initialized latitude, longitude and radius value
    ui->lineEditLatitude->setText(latitude);
    ui->lineEditLongitude->setText(longitude);
    ui->lineEditRayon->setText(radius);

    latitude = ui->lineEditLatitude->text();
    longitude = ui->lineEditLongitude->text();
    radius = ui->lineEditRayon->text();

    m_request.setUrl(QUrl("https://public.opendatasoft.com/api/records/1.0/search/?dataset=evenements-publics-cibul&sort=date_start&facet=tags&facet=placename&facet=department&facet=region&facet=city&facet=date_start&facet=date_end&facet=pricing_info&facet=updated_at&facet=city_district&geofilter.distance="+latitude+"%2C+"+longitude+"%2C+"+radius));

    m_request.setRawHeader("User-Agent", "MyOwnBrowser 1.0");
    m_reply = m_manager->get(m_request);

    int i;

    int count = json.object().toVariantMap()["records"].toJsonArray().count();

    ui->textEdit->clear();
    for (int i = 0; i < count; i++)
        {
           qDebug()<< "afficher nhits : nbr d'événement"<<endl;
           qDebug()<< json.object().toVariantMap()["nhits"]<<endl;

           qDebug()<< "title de record: " << i << "=>" << json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["title"]<<endl;
           QString title = json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["title"].toString();

           qDebug()<< "address de record: " << i << "=>" << json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["address"]<<endl;
           QString address = json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["address"].toString();

           qDebug()<< "space time info de record: " << i << "=>" << json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["space_time_info"]<<endl;
           QString space_time_info = json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["space_time_info"].toString();

           qDebug()<< "tarif de record: " << i << "=>" << json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["pricing_info"]<<endl;
           QString pricing_info = json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["princing_info"].toString();

           qDebug()<< "image de record: " << i << "=>" << json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["image"]<<endl;
           QString image = json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["image"].toString();

           qDebug()<< "geometry de record: " << i << "=>" << json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["geometry"]<<endl;
           QString geometry = json.object().toVariantMap()["records"].toJsonArray().at(i)["fields"]["geometry"].toString();

           ui->textEdit->append (title + " " + address + " " + space_time_info + " " + pricing_info + " " + image + " " + geometry);

        }

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

