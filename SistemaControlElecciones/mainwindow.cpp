#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   qDebug()<<"Holi xd";
   qDebug()<<"Iloh dx";
   qDebug()<<"LOL";
}

MainWindow::~MainWindow()
{
    delete ui;
}
