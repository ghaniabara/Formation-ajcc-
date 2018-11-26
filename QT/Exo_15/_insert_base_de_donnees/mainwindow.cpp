#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QDir>
#include <QSqlQuery>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(search()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::search()
{



    QString REG;
    QString CHEFLIEU;
    QString COM;
    QSqlQuery query(QString("SELECT REG, COM, CHEFLIEU FROM france2016 WHERE DEP = '%1' AND NCCENR ='%2'")
                    .arg(ui->lineEditDep->text()).arg(ui->lineEditVille->text()));

    //qDebug()<<query.lastQuery();
    while (query.next())
    {

     ui->lineEditREgion->setText(query.value(0).toString());
     ui->lineEditCommune->setText(query.value(1).toString());
     ui->lineEditChefLieu->setText(query.value(2).toString());



    }


}
