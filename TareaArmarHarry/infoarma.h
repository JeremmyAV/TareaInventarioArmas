#ifndef INFOARMA_H
#define INFOARMA_H

#include <QDialog>
#include "structs.h"
#include "ui_infoarma.h"

namespace Ui {
class infoArma;
}

class infoArma : public QDialog
{
    Q_OBJECT

public:
    explicit infoArma(QWidget *parent = nullptr);
    ~infoArma();

void cambiarInfo(QString textoTemp){
    ui->labelInfoArma->setText(textoTemp);
}

private:
    Ui::infoArma *ui;
};

#endif // INFOARMA_H
