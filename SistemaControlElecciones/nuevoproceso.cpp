#include "nuevoproceso.h"
#include "ui_nuevoproceso.h"

NuevoProceso::NuevoProceso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NuevoProceso)
{
    ui->setupUi(this);
}

NuevoProceso::~NuevoProceso()
{
    delete ui;
}
