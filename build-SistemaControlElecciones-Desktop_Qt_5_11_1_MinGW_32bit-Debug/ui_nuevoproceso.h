/********************************************************************************
** Form generated from reading UI file 'nuevoproceso.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVOPROCESO_H
#define UI_NUEVOPROCESO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NuevoProceso
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *barraTitulo;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *titulo;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout;
    QLabel *label;
    QDateEdit *inicio;
    QLabel *label_2;
    QDateEdit *cierre;
    QLabel *label_3;
    QDateEdit *votacion;
    QLabel *label_4;
    QTimeEdit *h_inicio;
    QLabel *label_5;
    QTimeEdit *h_fin;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *aceptar;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *cancelar;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *NuevoProceso)
    {
        if (NuevoProceso->objectName().isEmpty())
            NuevoProceso->setObjectName(QStringLiteral("NuevoProceso"));
        NuevoProceso->resize(500, 400);
        NuevoProceso->setStyleSheet(QLatin1String("QLabel{\n"
"font: 14pt \"Lato\";\n"
"}\n"
"QPushButton, QDateEdit, QTimeEdit{\n"
"font: 12pt \"Lato\";\n"
"}\n"
"#titulo{\n"
"font: 20pt \"Lato\";\n"
"}\n"
"#barraTitulo{\n"
"background: rgb(199, 189, 222);\n"
"border: 1px solid;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(NuevoProceso);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        barraTitulo = new QWidget(NuevoProceso);
        barraTitulo->setObjectName(QStringLiteral("barraTitulo"));
        horizontalLayout = new QHBoxLayout(barraTitulo);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        titulo = new QLabel(barraTitulo);
        titulo->setObjectName(QStringLiteral("titulo"));

        horizontalLayout->addWidget(titulo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(barraTitulo);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(NuevoProceso);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        inicio = new QDateEdit(NuevoProceso);
        inicio->setObjectName(QStringLiteral("inicio"));
        inicio->setMinimumSize(QSize(100, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, inicio);

        label_2 = new QLabel(NuevoProceso);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(150, 0));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cierre = new QDateEdit(NuevoProceso);
        cierre->setObjectName(QStringLiteral("cierre"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cierre);

        label_3 = new QLabel(NuevoProceso);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        votacion = new QDateEdit(NuevoProceso);
        votacion->setObjectName(QStringLiteral("votacion"));

        formLayout->setWidget(2, QFormLayout::FieldRole, votacion);

        label_4 = new QLabel(NuevoProceso);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        h_inicio = new QTimeEdit(NuevoProceso);
        h_inicio->setObjectName(QStringLiteral("h_inicio"));

        formLayout->setWidget(3, QFormLayout::FieldRole, h_inicio);

        label_5 = new QLabel(NuevoProceso);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        h_fin = new QTimeEdit(NuevoProceso);
        h_fin->setObjectName(QStringLiteral("h_fin"));

        formLayout->setWidget(4, QFormLayout::FieldRole, h_fin);


        horizontalLayout_2->addLayout(formLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        aceptar = new QPushButton(NuevoProceso);
        aceptar->setObjectName(QStringLiteral("aceptar"));
        aceptar->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(aceptar);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        cancelar = new QPushButton(NuevoProceso);
        cancelar->setObjectName(QStringLiteral("cancelar"));
        cancelar->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(cancelar);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(NuevoProceso);

        QMetaObject::connectSlotsByName(NuevoProceso);
    } // setupUi

    void retranslateUi(QDialog *NuevoProceso)
    {
        NuevoProceso->setWindowTitle(QApplication::translate("NuevoProceso", "Dialog", nullptr));
        titulo->setText(QApplication::translate("NuevoProceso", "Nuevo proceso electoral", nullptr));
        label->setText(QApplication::translate("NuevoProceso", "Inicio del proceso:", nullptr));
        label_2->setText(QApplication::translate("NuevoProceso", "Cierre de campa\303\261as:", nullptr));
        label_3->setText(QApplication::translate("NuevoProceso", "D\303\255a de la votaci\303\263n:", nullptr));
        label_4->setText(QApplication::translate("NuevoProceso", "Hora de inico:", nullptr));
        label_5->setText(QApplication::translate("NuevoProceso", "Hora de fin:", nullptr));
        aceptar->setText(QApplication::translate("NuevoProceso", "Aceptar", nullptr));
        cancelar->setText(QApplication::translate("NuevoProceso", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NuevoProceso: public Ui_NuevoProceso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVOPROCESO_H
