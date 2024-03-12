/********************************************************************************
** Form generated from reading UI file 'ventinfoarmas.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTINFOARMAS_H
#define UI_VENTINFOARMAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_ventInfoArmas
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ventInfoArmas)
    {
        if (ventInfoArmas->objectName().isEmpty())
            ventInfoArmas->setObjectName("ventInfoArmas");
        ventInfoArmas->resize(400, 300);
        buttonBox = new QDialogButtonBox(ventInfoArmas);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ventInfoArmas);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ventInfoArmas, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ventInfoArmas, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ventInfoArmas);
    } // setupUi

    void retranslateUi(QDialog *ventInfoArmas)
    {
        ventInfoArmas->setWindowTitle(QCoreApplication::translate("ventInfoArmas", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventInfoArmas: public Ui_ventInfoArmas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTINFOARMAS_H
