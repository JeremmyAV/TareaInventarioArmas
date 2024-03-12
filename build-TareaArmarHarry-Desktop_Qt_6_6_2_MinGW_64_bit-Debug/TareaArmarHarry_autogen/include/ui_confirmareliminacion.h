/********************************************************************************
** Form generated from reading UI file 'confirmareliminacion.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMARELIMINACION_H
#define UI_CONFIRMARELIMINACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_confirmarEliminacion
{
public:
    QLabel *label;
    QListWidget *listWidgetArmas;
    QPushButton *buttonConfElim;

    void setupUi(QDialog *confirmarEliminacion)
    {
        if (confirmarEliminacion->objectName().isEmpty())
            confirmarEliminacion->setObjectName("confirmarEliminacion");
        confirmarEliminacion->resize(548, 413);
        label = new QLabel(confirmarEliminacion);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 361, 71));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        listWidgetArmas = new QListWidget(confirmarEliminacion);
        listWidgetArmas->setObjectName("listWidgetArmas");
        listWidgetArmas->setGeometry(QRect(70, 80, 421, 201));
        QFont font1;
        font1.setPointSize(10);
        listWidgetArmas->setFont(font1);
        buttonConfElim = new QPushButton(confirmarEliminacion);
        buttonConfElim->setObjectName("buttonConfElim");
        buttonConfElim->setGeometry(QRect(230, 320, 80, 24));

        retranslateUi(confirmarEliminacion);

        QMetaObject::connectSlotsByName(confirmarEliminacion);
    } // setupUi

    void retranslateUi(QDialog *confirmarEliminacion)
    {
        confirmarEliminacion->setWindowTitle(QCoreApplication::translate("confirmarEliminacion", "Eliminar arma", nullptr));
        label->setText(QCoreApplication::translate("confirmarEliminacion", "Seleccione el arma que desea eliminar", nullptr));
        buttonConfElim->setText(QCoreApplication::translate("confirmarEliminacion", "Eliminar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirmarEliminacion: public Ui_confirmarEliminacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMARELIMINACION_H
