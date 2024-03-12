/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *tituloInventario;
    QListWidget *listWidgetArmas;
    QPushButton *buttonAgregar;
    QPushButton *buttonEliminar;
    QLabel *tituloInventario_2;
    QLineEdit *nombreBuscar;
    QLabel *label;
    QListWidget *listWidgetTipoBuscar;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *listWidgetModBuscar;
    QPushButton *buttonAgregar_2;
    QPushButton *buttonEliminar_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuInventario;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1239, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tituloInventario = new QLabel(centralwidget);
        tituloInventario->setObjectName("tituloInventario");
        tituloInventario->setGeometry(QRect(270, 10, 241, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(18);
        font.setBold(true);
        tituloInventario->setFont(font);
        listWidgetArmas = new QListWidget(centralwidget);
        listWidgetArmas->setObjectName("listWidgetArmas");
        listWidgetArmas->setGeometry(QRect(50, 80, 711, 321));
        QFont font1;
        font1.setPointSize(14);
        listWidgetArmas->setFont(font1);
        buttonAgregar = new QPushButton(centralwidget);
        buttonAgregar->setObjectName("buttonAgregar");
        buttonAgregar->setGeometry(QRect(320, 450, 80, 24));
        buttonEliminar = new QPushButton(centralwidget);
        buttonEliminar->setObjectName("buttonEliminar");
        buttonEliminar->setGeometry(QRect(410, 450, 80, 24));
        tituloInventario_2 = new QLabel(centralwidget);
        tituloInventario_2->setObjectName("tituloInventario_2");
        tituloInventario_2->setGeometry(QRect(950, 10, 241, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(14);
        font2.setBold(true);
        tituloInventario_2->setFont(font2);
        nombreBuscar = new QLineEdit(centralwidget);
        nombreBuscar->setObjectName("nombreBuscar");
        nombreBuscar->setGeometry(QRect(950, 70, 231, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(850, 70, 71, 21));
        QFont font3;
        font3.setPointSize(12);
        label->setFont(font3);
        listWidgetTipoBuscar = new QListWidget(centralwidget);
        listWidgetTipoBuscar->setObjectName("listWidgetTipoBuscar");
        listWidgetTipoBuscar->setGeometry(QRect(950, 110, 231, 81));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(850, 110, 71, 21));
        label_2->setFont(font3);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(850, 210, 91, 21));
        label_3->setFont(font3);
        listWidgetModBuscar = new QListWidget(centralwidget);
        listWidgetModBuscar->setObjectName("listWidgetModBuscar");
        listWidgetModBuscar->setGeometry(QRect(950, 210, 231, 81));
        buttonAgregar_2 = new QPushButton(centralwidget);
        buttonAgregar_2->setObjectName("buttonAgregar_2");
        buttonAgregar_2->setGeometry(QRect(950, 310, 80, 24));
        buttonEliminar_2 = new QPushButton(centralwidget);
        buttonEliminar_2->setObjectName("buttonEliminar_2");
        buttonEliminar_2->setGeometry(QRect(1100, 310, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1239, 21));
        menuInventario = new QMenu(menubar);
        menuInventario->setObjectName("menuInventario");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuInventario->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tarea armas", nullptr));
        tituloInventario->setText(QCoreApplication::translate("MainWindow", "Inventario de armas", nullptr));
        buttonAgregar->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        buttonEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        tituloInventario_2->setText(QCoreApplication::translate("MainWindow", "Filtrar por:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Tipo", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Modificador", nullptr));
        buttonAgregar_2->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        buttonEliminar_2->setText(QCoreApplication::translate("MainWindow", "Mostrar todas", nullptr));
        menuInventario->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
