/********************************************************************************
** Form generated from reading UI file 'infoarma.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOARMA_H
#define UI_INFOARMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_infoArma
{
public:
    QLabel *labelInfoArma;

    void setupUi(QDialog *infoArma)
    {
        if (infoArma->objectName().isEmpty())
            infoArma->setObjectName("infoArma");
        infoArma->resize(400, 300);
        labelInfoArma = new QLabel(infoArma);
        labelInfoArma->setObjectName("labelInfoArma");
        labelInfoArma->setGeometry(QRect(20, 20, 361, 271));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font.setPointSize(12);
        labelInfoArma->setFont(font);

        retranslateUi(infoArma);

        QMetaObject::connectSlotsByName(infoArma);
    } // setupUi

    void retranslateUi(QDialog *infoArma)
    {
        infoArma->setWindowTitle(QCoreApplication::translate("infoArma", "Informacion del arma.", nullptr));
        labelInfoArma->setText(QCoreApplication::translate("infoArma", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class infoArma: public Ui_infoArma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOARMA_H
