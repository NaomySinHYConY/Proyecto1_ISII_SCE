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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NuevoProceso
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *nuevoProceso;
    QVBoxLayout *verticalLayout_2;
    QWidget *barraTitulo;
    QHBoxLayout *horizontalLayout;
    QLabel *titulo;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
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
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *aceptar;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *cancelar;
    QSpacerItem *horizontalSpacer_6;
    QWidget *candidatosRegistrados;
    QVBoxLayout *verticalLayout_4;
    QWidget *barraTitulo_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QLabel *titulo_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QTableView *tableView;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *aceptar_2;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *cancelar_2;
    QSpacerItem *horizontalSpacer_11;
    QWidget *inspeccionarProceso;
    QVBoxLayout *verticalLayout_5;
    QWidget *barraTitulo_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *titulo_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_15;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QDateEdit *inicio_2;
    QLabel *label_7;
    QDateEdit *cierre_2;
    QLabel *label_8;
    QDateEdit *votacion_2;
    QLabel *label_9;
    QTimeEdit *h_inicio_2;
    QLabel *label_10;
    QTimeEdit *h_fin_2;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *aceptar_3;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *cancelar_3;
    QSpacerItem *horizontalSpacer_14;
    QWidget *page;
    QVBoxLayout *verticalLayout_6;
    QWidget *barraTitulo_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *titulo_4;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_11;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_21;

    void setupUi(QDialog *NuevoProceso)
    {
        if (NuevoProceso->objectName().isEmpty())
            NuevoProceso->setObjectName(QStringLiteral("NuevoProceso"));
        NuevoProceso->resize(506, 400);
        NuevoProceso->setStyleSheet(QLatin1String("QLabel{\n"
"font: 14pt \"Lato\";\n"
"}\n"
"QPushButton, QDateEdit, QTimeEdit{\n"
"font: 12pt \"Lato\";\n"
"}\n"
"#titulo, #titulo_2, #titulo_3, #titulo_4{\n"
"font: 20pt \"Lato\";\n"
"}\n"
"#barraTitulo, #barraTitulo_2, #barraTitulo_3, #barraTitulo_4{\n"
"background: rgb(199, 189, 222);\n"
"border: 1px solid;\n"
"}\n"
"QPushButton{\n"
"border: 1px solid;\n"
"border-radius: 5px;\n"
"padding-top: 5px;\n"
"padding-right: 5px;\n"
"padding-bottom: 5px;\n"
"padding-left: 5px;\n"
"background-color: rgba(199, 189, 222,150);\n"
"font: \"Lato\";\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(199, 189, 222);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(NuevoProceso);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        stackedWidget = new QStackedWidget(NuevoProceso);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        nuevoProceso = new QWidget();
        nuevoProceso->setObjectName(QStringLiteral("nuevoProceso"));
        verticalLayout_2 = new QVBoxLayout(nuevoProceso);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        barraTitulo = new QWidget(nuevoProceso);
        barraTitulo->setObjectName(QStringLiteral("barraTitulo"));
        horizontalLayout = new QHBoxLayout(barraTitulo);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        titulo = new QLabel(barraTitulo);
        titulo->setObjectName(QStringLiteral("titulo"));

        horizontalLayout->addWidget(titulo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(barraTitulo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(nuevoProceso);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        inicio = new QDateEdit(nuevoProceso);
        inicio->setObjectName(QStringLiteral("inicio"));
        inicio->setMinimumSize(QSize(100, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, inicio);

        label_2 = new QLabel(nuevoProceso);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(150, 0));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        cierre = new QDateEdit(nuevoProceso);
        cierre->setObjectName(QStringLiteral("cierre"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cierre);

        label_3 = new QLabel(nuevoProceso);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        votacion = new QDateEdit(nuevoProceso);
        votacion->setObjectName(QStringLiteral("votacion"));

        formLayout->setWidget(2, QFormLayout::FieldRole, votacion);

        label_4 = new QLabel(nuevoProceso);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        h_inicio = new QTimeEdit(nuevoProceso);
        h_inicio->setObjectName(QStringLiteral("h_inicio"));

        formLayout->setWidget(3, QFormLayout::FieldRole, h_inicio);

        label_5 = new QLabel(nuevoProceso);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        h_fin = new QTimeEdit(nuevoProceso);
        h_fin->setObjectName(QStringLiteral("h_fin"));

        formLayout->setWidget(4, QFormLayout::FieldRole, h_fin);


        horizontalLayout_2->addLayout(formLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        aceptar = new QPushButton(nuevoProceso);
        aceptar->setObjectName(QStringLiteral("aceptar"));
        aceptar->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(aceptar);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        cancelar = new QPushButton(nuevoProceso);
        cancelar->setObjectName(QStringLiteral("cancelar"));
        cancelar->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(cancelar);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(nuevoProceso);
        candidatosRegistrados = new QWidget();
        candidatosRegistrados->setObjectName(QStringLiteral("candidatosRegistrados"));
        verticalLayout_4 = new QVBoxLayout(candidatosRegistrados);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        barraTitulo_2 = new QWidget(candidatosRegistrados);
        barraTitulo_2->setObjectName(QStringLiteral("barraTitulo_2"));
        horizontalLayout_4 = new QHBoxLayout(barraTitulo_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        pushButton = new QPushButton(barraTitulo_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        titulo_2 = new QLabel(barraTitulo_2);
        titulo_2->setObjectName(QStringLiteral("titulo_2"));

        horizontalLayout_4->addWidget(titulo_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_4->addWidget(barraTitulo_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tableView = new QTableView(candidatosRegistrados);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_5->addWidget(tableView);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        aceptar_2 = new QPushButton(candidatosRegistrados);
        aceptar_2->setObjectName(QStringLiteral("aceptar_2"));
        aceptar_2->setMinimumSize(QSize(120, 0));

        horizontalLayout_6->addWidget(aceptar_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        cancelar_2 = new QPushButton(candidatosRegistrados);
        cancelar_2->setObjectName(QStringLiteral("cancelar_2"));
        cancelar_2->setMinimumSize(QSize(120, 0));

        horizontalLayout_6->addWidget(cancelar_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);


        verticalLayout_4->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(candidatosRegistrados);
        inspeccionarProceso = new QWidget();
        inspeccionarProceso->setObjectName(QStringLiteral("inspeccionarProceso"));
        verticalLayout_5 = new QVBoxLayout(inspeccionarProceso);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        barraTitulo_3 = new QWidget(inspeccionarProceso);
        barraTitulo_3->setObjectName(QStringLiteral("barraTitulo_3"));
        horizontalLayout_7 = new QHBoxLayout(barraTitulo_3);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(5, 5, 5, 5);
        titulo_3 = new QLabel(barraTitulo_3);
        titulo_3->setObjectName(QStringLiteral("titulo_3"));

        horizontalLayout_7->addWidget(titulo_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(barraTitulo_3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setVerticalSpacing(10);
        formLayout_2->setContentsMargins(5, 5, 5, 5);
        label_6 = new QLabel(inspeccionarProceso);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        inicio_2 = new QDateEdit(inspeccionarProceso);
        inicio_2->setObjectName(QStringLiteral("inicio_2"));
        inicio_2->setMinimumSize(QSize(100, 0));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, inicio_2);

        label_7 = new QLabel(inspeccionarProceso);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(150, 0));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        cierre_2 = new QDateEdit(inspeccionarProceso);
        cierre_2->setObjectName(QStringLiteral("cierre_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, cierre_2);

        label_8 = new QLabel(inspeccionarProceso);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        votacion_2 = new QDateEdit(inspeccionarProceso);
        votacion_2->setObjectName(QStringLiteral("votacion_2"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, votacion_2);

        label_9 = new QLabel(inspeccionarProceso);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        h_inicio_2 = new QTimeEdit(inspeccionarProceso);
        h_inicio_2->setObjectName(QStringLiteral("h_inicio_2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, h_inicio_2);

        label_10 = new QLabel(inspeccionarProceso);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_10);

        h_fin_2 = new QTimeEdit(inspeccionarProceso);
        h_fin_2->setObjectName(QStringLiteral("h_fin_2"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, h_fin_2);


        horizontalLayout_9->addLayout(formLayout_2);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_16);


        verticalLayout_5->addLayout(horizontalLayout_9);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        aceptar_3 = new QPushButton(inspeccionarProceso);
        aceptar_3->setObjectName(QStringLiteral("aceptar_3"));
        aceptar_3->setMinimumSize(QSize(120, 0));

        horizontalLayout_8->addWidget(aceptar_3);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);

        pushButton_2 = new QPushButton(inspeccionarProceso);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(120, 0));

        horizontalLayout_8->addWidget(pushButton_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        cancelar_3 = new QPushButton(inspeccionarProceso);
        cancelar_3->setObjectName(QStringLiteral("cancelar_3"));
        cancelar_3->setMinimumSize(QSize(120, 0));

        horizontalLayout_8->addWidget(cancelar_3);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);


        verticalLayout_5->addLayout(horizontalLayout_8);

        stackedWidget->addWidget(inspeccionarProceso);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_6 = new QVBoxLayout(page);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        barraTitulo_4 = new QWidget(page);
        barraTitulo_4->setObjectName(QStringLiteral("barraTitulo_4"));
        horizontalLayout_10 = new QHBoxLayout(barraTitulo_4);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(5, 5, 5, 5);
        titulo_4 = new QLabel(barraTitulo_4);
        titulo_4->setObjectName(QStringLiteral("titulo_4"));

        horizontalLayout_10->addWidget(titulo_4);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_18);


        verticalLayout_6->addWidget(barraTitulo_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_12->addWidget(label_11);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_19);


        verticalLayout_6->addLayout(horizontalLayout_12);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_11->addWidget(textEdit);


        verticalLayout_6->addLayout(horizontalLayout_11);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_20);

        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(120, 0));

        horizontalLayout_13->addWidget(pushButton_4);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_22);

        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(120, 0));

        horizontalLayout_13->addWidget(pushButton_3);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_21);


        verticalLayout_6->addLayout(horizontalLayout_13);

        stackedWidget->addWidget(page);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(NuevoProceso);

        stackedWidget->setCurrentIndex(0);


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
        pushButton->setText(QString());
        titulo_2->setText(QApplication::translate("NuevoProceso", "Candidatos registrados", nullptr));
        aceptar_2->setText(QApplication::translate("NuevoProceso", "Terminado", nullptr));
        cancelar_2->setText(QApplication::translate("NuevoProceso", "Cancelar", nullptr));
        titulo_3->setText(QApplication::translate("NuevoProceso", "Inspeccionar proceso", nullptr));
        label_6->setText(QApplication::translate("NuevoProceso", "Inicio del proceso:", nullptr));
        label_7->setText(QApplication::translate("NuevoProceso", "Cierre de campa\303\261as:", nullptr));
        label_8->setText(QApplication::translate("NuevoProceso", "D\303\255a de la votaci\303\263n:", nullptr));
        label_9->setText(QApplication::translate("NuevoProceso", "Hora de inico:", nullptr));
        label_10->setText(QApplication::translate("NuevoProceso", "Hora de fin:", nullptr));
        aceptar_3->setText(QApplication::translate("NuevoProceso", "Aceptar", nullptr));
        pushButton_2->setText(QApplication::translate("NuevoProceso", "Modificar", nullptr));
        cancelar_3->setText(QApplication::translate("NuevoProceso", "Cancelar", nullptr));
        titulo_4->setText(QApplication::translate("NuevoProceso", "Solicitud de publicaci\303\263n", nullptr));
        label_11->setText(QApplication::translate("NuevoProceso", "Propuesta o hito del candidato (m\303\241ximo 400 caracteres):", nullptr));
        pushButton_4->setText(QApplication::translate("NuevoProceso", "Aceptar", nullptr));
        pushButton_3->setText(QApplication::translate("NuevoProceso", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NuevoProceso: public Ui_NuevoProceso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVOPROCESO_H
