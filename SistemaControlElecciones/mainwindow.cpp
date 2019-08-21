#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "nuevoproceso.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mDatabase = QSqlDatabase::addDatabase("QODBC");
    mDatabase.setHostName("127.0.0.1");
    mDatabase.setPort(3306);
    mDatabase.setDatabaseName("Control_Elecciones");
    mDatabase.setUserName("root");
    mDatabase.setPassword("");

    ui->lineEditContra->setEchoMode(QLineEdit::Password);
    ui->lineEditUsuario->setFocus();

    if(!mDatabase.open()){
        QMessageBox::critical(this,"Error",
                     "No se puede acceder a la base de datos",
                     "Aceptar");
        return;
    }
    else{
        qDebug() << "exito";
    }
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
    NuevoProceso B;
    B.exec();
}
