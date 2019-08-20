/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *Fondo;
    QWidget *login;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *Titulo;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLineEdit *lineEditUsuario;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QLineEdit *lineEditContra;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Ingresar;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *Olvide;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer;
    QWidget *MenuAdm;
    QVBoxLayout *verticalLayout_7;
    QWidget *barraAdm;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *AdmIcono;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *botonSalir;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *botonNuevoProceso;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *botonInspeccionar;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *botonVerUsuarios;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *botonModerar;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_5;
    QWidget *page;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 500);
        MainWindow->setStyleSheet(QLatin1String("#Fondo{\n"
"background-color: rgb(255, 255, 255);\n"
"border: 1px solid;\n"
"}\n"
"#Titulo, #barraAdm{\n"
"background-color: rgb(199, 189, 222);\n"
"border: 1px solid;\n"
"}\n"
""));
        MainWindow->setIconSize(QSize(24, 24));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        Fondo = new QStackedWidget(centralWidget);
        Fondo->setObjectName(QStringLiteral("Fondo"));
        Fondo->setEnabled(true);
        login = new QWidget();
        login->setObjectName(QStringLiteral("login"));
        verticalLayout_4 = new QVBoxLayout(login);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        Titulo = new QWidget(login);
        Titulo->setObjectName(QStringLiteral("Titulo"));
        horizontalLayout_2 = new QHBoxLayout(Titulo);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(Titulo);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Lato"));
        font.setPointSize(24);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(Titulo);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(5, 5, 5, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Lato"));
        font1.setPointSize(12);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        lineEditUsuario = new QLineEdit(login);
        lineEditUsuario->setObjectName(QStringLiteral("lineEditUsuario"));
        lineEditUsuario->setFont(font1);

        horizontalLayout->addWidget(lineEditUsuario);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        lineEditContra = new QLineEdit(login);
        lineEditContra->setObjectName(QStringLiteral("lineEditContra"));
        lineEditContra->setFont(font1);

        horizontalLayout_3->addWidget(lineEditContra);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        Ingresar = new QPushButton(login);
        Ingresar->setObjectName(QStringLiteral("Ingresar"));
        Ingresar->setMinimumSize(QSize(280, 0));
        Ingresar->setFont(font1);

        horizontalLayout_4->addWidget(Ingresar);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        Olvide = new QLabel(login);
        Olvide->setObjectName(QStringLiteral("Olvide"));
        QFont font2;
        font2.setFamily(QStringLiteral("Lato"));
        font2.setPointSize(10);
        font2.setUnderline(true);
        Olvide->setFont(font2);

        horizontalLayout_5->addWidget(Olvide);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_3);

        Fondo->addWidget(login);
        MenuAdm = new QWidget();
        MenuAdm->setObjectName(QStringLiteral("MenuAdm"));
        verticalLayout_7 = new QVBoxLayout(MenuAdm);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        barraAdm = new QWidget(MenuAdm);
        barraAdm->setObjectName(QStringLiteral("barraAdm"));
        horizontalLayout_7 = new QHBoxLayout(barraAdm);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(5, 5, 5, 5);
        AdmIcono = new QPushButton(barraAdm);
        AdmIcono->setObjectName(QStringLiteral("AdmIcono"));
        AdmIcono->setMinimumSize(QSize(40, 40));
        AdmIcono->setMaximumSize(QSize(50, 50));

        horizontalLayout_7->addWidget(AdmIcono);

        label_4 = new QLabel(barraAdm);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font3;
        font3.setFamily(QStringLiteral("Lato"));
        font3.setPointSize(16);
        label_4->setFont(font3);

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        botonSalir = new QPushButton(barraAdm);
        botonSalir->setObjectName(QStringLiteral("botonSalir"));
        botonSalir->setMinimumSize(QSize(40, 40));
        botonSalir->setMaximumSize(QSize(50, 50));

        horizontalLayout_7->addWidget(botonSalir);


        verticalLayout_7->addWidget(barraAdm);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        botonNuevoProceso = new QPushButton(MenuAdm);
        botonNuevoProceso->setObjectName(QStringLiteral("botonNuevoProceso"));
        botonNuevoProceso->setMinimumSize(QSize(150, 50));

        horizontalLayout_6->addWidget(botonNuevoProceso);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);

        botonInspeccionar = new QPushButton(MenuAdm);
        botonInspeccionar->setObjectName(QStringLiteral("botonInspeccionar"));
        botonInspeccionar->setMinimumSize(QSize(150, 50));

        horizontalLayout_6->addWidget(botonInspeccionar);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, 5, 5, 5);
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        botonVerUsuarios = new QPushButton(MenuAdm);
        botonVerUsuarios->setObjectName(QStringLiteral("botonVerUsuarios"));
        botonVerUsuarios->setMinimumSize(QSize(150, 50));

        horizontalLayout_8->addWidget(botonVerUsuarios);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);

        botonModerar = new QPushButton(MenuAdm);
        botonModerar->setObjectName(QStringLiteral("botonModerar"));
        botonModerar->setMinimumSize(QSize(150, 50));

        horizontalLayout_8->addWidget(botonModerar);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);


        verticalLayout_6->addLayout(horizontalLayout_8);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        Fondo->addWidget(MenuAdm);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        Fondo->addWidget(page);

        verticalLayout->addWidget(Fondo);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        Fondo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Sistema de control de elecciones", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Usuario:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Contrase\303\261a: ", nullptr));
        Ingresar->setText(QApplication::translate("MainWindow", "Ingresar", nullptr));
        Olvide->setText(QApplication::translate("MainWindow", "Olvid\303\251 mi usuario o contrase\303\261a", nullptr));
        AdmIcono->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Administrador", nullptr));
        botonSalir->setText(QString());
        botonNuevoProceso->setText(QApplication::translate("MainWindow", "Nuevo proceso electoral", nullptr));
        botonInspeccionar->setText(QApplication::translate("MainWindow", "Inspeccionar proceso", nullptr));
        botonVerUsuarios->setText(QApplication::translate("MainWindow", "Ver usuarios", nullptr));
        botonModerar->setText(QApplication::translate("MainWindow", "Moderar publicaciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
