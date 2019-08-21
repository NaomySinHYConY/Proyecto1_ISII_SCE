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
    QString u = ui->lineEditUsuario->text();
    QString c = ui->lineEditContra->text();

    QSqlQuery us("call usp_usuario('"+u+"');");
    us.first();
    QString usuario = us.value(0).toString();
    qDebug() << usuario;

    QSqlQuery co("call usp_contra('"+u+"', "+c+")");
    co.first();
    QString contr = co.value(0).toString();
    qDebug() << contr;

    QSqlQuery rol("call usp_rol('"+u+"');");
    rol.first();
    int r = rol.value(0).toInt();
    qDebug() << contr;

    if(u==usuario && c==contr && r==1){
        ui->Fondo->setCurrentIndex(1);
    }else{
        QMessageBox::information(this, "Incorrecta", "Incorrecta",
                                 "Aceptar");
    }
}

void MainWindow::on_botonNuevoProceso_clicked()
{
    NuevoProceso B;
    B.exec();
}
