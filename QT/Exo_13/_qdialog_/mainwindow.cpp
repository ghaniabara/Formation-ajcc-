#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QAction>
#include<QFileDialog>
#include "dialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action_Quitter, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->action_Ouvrir_fichier, SIGNAL(triggered()), this, SLOT(ouvrir()));
    connect(ui->action_A_propos, SIGNAL(triggered()), this, SLOT(dialogue()));
    connect(ui->action_Save, SIGNAL(triggered()), this, SLOT(save()));
    connect(ui->action_Configuration, SIGNAL(triggered()), this, SLOT(dialogue()));

    m_fenetre = new Dialog(this);

  connect (m_fenetre,SIGNAL(FontModified(QFont,int)), this, SLOT(modify(QFont,int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ouvrir()
{

    test = QFileDialog::getOpenFileName(this,
    QString("Ouvrir un fichier"), QDir::homePath()+"/Exercices_C++",
    "File (*.txt)");
    QFile File(test);

    if(!File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return;
    }
    else
    {
    QString r;
    r = File.readAll();
    ui->textEdit->append(r);
    }
}

void MainWindow::save()
{

    test = QFileDialog::getSaveFileName(this, QString("Enregistrer un fichier"), "/home/ghania/Bureau/QT/Exo_11");

    QFile save(test);
    save.open(QIODevice::WriteOnly| QIODevice::Text);
    QTextStream out(&save);
        out << ui->textEdit->toPlainText();
}

void MainWindow::dialogue()
{
        m_fenetre->show() ;
}


void MainWindow:: modify(QFont MyFont, int size)
{
    MyFont.setPointSize(size);
    this->setFont(MyFont);


}
