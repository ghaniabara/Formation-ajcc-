#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableView>
#include <QSqlDatabase>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_model = new QSqlTableModel();
    m_model->setTable("france2016");
    m_model->select();
    ui->tableView->setModel(this->m_model);
    connect(ui->tableView, SIGNAL(pressed(QModelIndex)), this, SLOT(AfficheInfo(QModelIndex)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AfficheInfo(QModelIndex ind)
{
    QString val;
    val=ind.data().toString();

}
