#ifndef NUEVOPROCESO_H
#define NUEVOPROCESO_H

#include <QDialog>

namespace Ui {
class NuevoProceso;
}

class NuevoProceso : public QDialog
{
    Q_OBJECT

public:
    explicit NuevoProceso(QWidget *parent = nullptr);
    ~NuevoProceso();

private slots:
    void on_cancelar_clicked();

private:
    Ui::NuevoProceso *ui;
};

#endif // NUEVOPROCESO_H
