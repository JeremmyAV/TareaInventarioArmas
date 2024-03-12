#include "ventinfoarmas.h"
#include "ui_ventinfoarmas.h"

ventInfoArmas::ventInfoArmas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ventInfoArmas)
{
    ui->setupUi(this);
}

ventInfoArmas::~ventInfoArmas()
{
    delete ui;
}
