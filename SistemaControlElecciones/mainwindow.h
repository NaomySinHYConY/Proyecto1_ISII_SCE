#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Ingresar_clicked();

    void on_botonNuevoProceso_clicked();

    void on_botonSalir_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase mDatabase;
};

#endif // MAINWINDOW_H
