#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCompleter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList words;
    words << "Romain" << "Robert" << "Remy";

    m_completer = new QCompleter(words, this);
    m_completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit->setCompleter(m_completer);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_completer;
}



