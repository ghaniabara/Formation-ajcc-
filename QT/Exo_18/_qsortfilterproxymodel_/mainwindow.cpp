#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_model = new QSqlQueryModel();

    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->lineEditDep, SIGNAL(textEdited(QString)), this, SLOT(search()));
    QSqlQuery query(("SELECT * FROM france2016"));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_model;
}

void MainWindow::search()
{

    QSqlQuery query(QString("SELECT * FROM france2016 WHERE DEP = '%1'")
                    .arg(ui->lineEditDep->text()));

   if(ui->lineEditDep->text().isEmpty())
   {
       return;
   }
   else
   {
    m_model->setQuery(query);
    ui->tableView->setModel(this->m_model);
   }

}



