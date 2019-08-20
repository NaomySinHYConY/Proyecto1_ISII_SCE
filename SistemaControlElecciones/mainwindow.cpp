#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "nuevoproceso.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   qDebug()<<"Holi xd";
   qDebug()<<"Iloh dx";
   qDebug()<<"LOLxd";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Ingresar_clicked()
{
    ui->Fondo->setCurrentIndex(1);
}

void MainWindow::on_botonNuevoProceso_clicked()
{
    NuevoProceso N;
    N.exec();
}
