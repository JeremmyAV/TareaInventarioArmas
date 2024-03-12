/********************************************************************************
** Form generated from reading UI file 'ventagregar.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTAGREGAR_H
#define UI_VENTAGREGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ventAgregar
{
public:
    QListWidget *listWidgetModifie;
    QListWidget *listWidgetType;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *ventAgregar)
    {
        if (ventAgregar->objectName().isEmpty())
            ventAgregar->setObjectName("ventAgregar");
        ventAgregar->resize(465, 417);
        listWidgetModifie = new QListWidget(ventAgregar);
        listWidgetModifie->setObjectName("listWidgetModifie");
        listWidgetModifie->setGeometry(QRect(80, 270, 311, 81));
        listWidgetType = new QListWidget(ventAgregar);
        listWidgetType->setObjectName("listWidgetType");
        listWidgetType->setGeometry(QRect(80, 150, 311, 81));
        lineEdit = new QLineEdit(ventAgregar);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 30, 113, 24));
        lineEdit_2 = new QLineEdit(ventAgregar);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(80, 90, 113, 24));
        label = new QLabel(ventAgregar);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 16, 16));
        label_2 = new QLabel(ventAgregar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 70, 41, 16));
        label_3 = new QLabel(ventAgregar);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 130, 31, 16));
        label_4 = new QLabel(ventAgregar);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 250, 49, 16));
        pushButton = new QPushButton(ventAgregar);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 370, 80, 24));

        retranslateUi(ventAgregar);

        QMetaObject::connectSlotsByName(ventAgregar);
    } // setupUi

    void retranslateUi(QDialog *ventAgregar)
    {
        ventAgregar->setWindowTitle(QCoreApplication::translate("ventAgregar", "Agregar arma", nullptr));
        label->setText(QCoreApplication::translate("ventAgregar", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("ventAgregar", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("ventAgregar", "Type", nullptr));
        label_4->setText(QCoreApplication::translate("ventAgregar", "Modifie", nullptr));
        pushButton->setText(QCoreApplication::translate("ventAgregar", "Guardar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventAgregar: public Ui_ventAgregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTAGREGAR_H
