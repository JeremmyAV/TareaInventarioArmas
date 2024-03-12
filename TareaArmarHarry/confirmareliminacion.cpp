#include "confirmareliminacion.h"
#include "mainwindow.h"
#include "ui_confirmareliminacion.h"

extern MainWindow *m;
extern int cantInventario;
extern arma inventario[];

extern void eliminarArmaDelInventario(int posArma);

int selectArmaTemp2 = 0;

confirmarEliminacion::confirmarEliminacion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::confirmarEliminacion)
{
    ui->setupUi(this);

    actualizar();
}

confirmarEliminacion::~confirmarEliminacion()
{
    delete ui;
}

void confirmarEliminacion::on_buttonBox_accepted()
{
    if (selectArmaTemp2 != 0){
        cout << selectArmaTemp2 << endl;
        eliminarArmaDelInventario(selectArmaTemp2);
        m->actualizarInventario();
    }
    else{
        QMessageBox advertencia;
        advertencia.setIcon(QMessageBox::Warning);
        advertencia.setWindowTitle("Error.");
        advertencia.setText("Debe seleccionar un arma.");
        advertencia.exec();
    }
}


void confirmarEliminacion::on_listWidgetArmas_itemClicked(QListWidgetItem *item)
{
    selectArmaTemp2 = ui->listWidgetArmas->row(item);
}


void confirmarEliminacion::on_buttonConfElim_clicked()
{
    if (selectArmaTemp2 != 0){
        cout << selectArmaTemp2 << endl;
        eliminarArmaDelInventario(selectArmaTemp2);
        m->filtrarInventario();

        actualizar();
        selectArmaTemp2 = 0;
    }
    else{
        QMessageBox advertencia;
        advertencia.setIcon(QMessageBox::Warning);
        advertencia.setWindowTitle("Error.");
        advertencia.setText("Debe seleccionar un arma.");
        advertencia.exec();
    }
}

void confirmarEliminacion::on_confirmarEliminacion_rejected()
{

}

void confirmarEliminacion::actualizar(){
    ui->listWidgetArmas->clear();
    ui->listWidgetArmas->addItem("ID\tNOMBRE");
    for(int i = 0; i < cantInventario; i++){
        QString tempNombre = QString::fromStdString(inventario[i].getIdNombre());
        ui->listWidgetArmas->addItem(tempNombre);
    }
}

