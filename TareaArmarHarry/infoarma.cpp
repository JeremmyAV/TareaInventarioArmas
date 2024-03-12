#include "infoarma.h"
#include "ui_infoarma.h"
#include "structs.h"

infoArma::infoArma(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::infoArma)
{
    ui->setupUi(this);
}

infoArma::~infoArma()
{
    delete ui;
}
