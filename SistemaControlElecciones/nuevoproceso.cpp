#include "nuevoproceso.h"
#include "ui_nuevoproceso.h"
#include <QMessageBox>

NuevoProceso::NuevoProceso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NuevoProceso)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

NuevoProceso::~NuevoProceso()
{
    delete ui;
}

void NuevoProceso::on_cancelar_clicked()
{
    int e = QMessageBox::question(this, "Cancelar",
                                  "¿Está seguro de que quiere cancelar la operación?",
                                  "Sí", "No");
    if(e==0){
        close();
    }
}
