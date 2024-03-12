#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "structs.h"
#include "infoarma.h"
#include "ventinfoarmas.h"

extern int cantInventario;
extern arma inventario[];
extern string obtenerArmaPorID(string idTemp);
extern string listTypes [];
extern int largoListTypes;
extern Modifier listMod [];
extern int largoListMod;

int selectArmaTemp = 0;

int selectTipeBusc = -1;
int selectModBusc = -1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    actualizarInventario();

    ventInAr = nullptr;
    ventAg = nullptr;
    ventConfElim = nullptr;

    ui->listWidgetTipoBuscar->addItem("Cualquiera");
    for(int i = 0; i < largoListTypes; i++){
        QString tempType = QString::fromStdString(listTypes[i]);
        ui->listWidgetTipoBuscar->addItem(tempType);
    }

    ui->listWidgetModBuscar->addItem("Cualquiera");
    for(int k = 0; k < largoListMod; k++){
        QString tempMod = QString::fromStdString(listMod[k].getStringShort());
        ui->listWidgetModBuscar->addItem(tempMod);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_listWidgetArmas_itemDoubleClicked(QListWidgetItem *item)
{
    //string textoTemp = item->text().toStdString();

    QStringList tokens = item->text().split('\t', Qt::SkipEmptyParts);

    /*
    // Imprimir las partes separadas
    for (const auto& t : tokens) {
        std::cout << t.toStdString() << std::endl;
    }
*/

    if (tokens[0].toStdString() != "ID"){

        //cout << tokens[0].toStdString() << endl;

        if (!ventInAr) {
            ventInAr = new infoArma(this);
        }
        ventInAr->cambiarInfo(QString::fromStdString(obtenerArmaPorID(tokens[0].toStdString())));
        ventInAr->show();
    }
}


void MainWindow::on_buttonAgregar_clicked()
{
    if (!ventAg) {
        ventAg = new ventAgregar(this);
    }
    ventAg->show();
}


void MainWindow::actualizarInventario(){
    ui->listWidgetArmas->clear();
    ui->listWidgetArmas->addItem("ID\tNOMBRE");
    for(int i = 0; i < cantInventario; i++){
        QString tempNombre = QString::fromStdString(inventario[i].getIdNombre());
        ui->listWidgetArmas->addItem(tempNombre);
    }
    //cout << "actualizado" << endl;
}


void MainWindow::on_listWidgetArmas_itemClicked(QListWidgetItem *item)
{
    selectArmaTemp = ui->listWidgetArmas->row(item);
}


void MainWindow::on_buttonEliminar_clicked()
{
    if (!ventConfElim) {
        ventConfElim = new confirmarEliminacion(this);
    }
    ventConfElim->actualizar();
    ventConfElim->show();

}


void MainWindow::filtrarInventario(){

    ui->listWidgetArmas->clear();
    ui->listWidgetArmas->addItem("ID\tNOMBRE");
    for(int i = 0; i < cantInventario; i++){

        if (((inventario[i].Name).find(ui->nombreBuscar->text().toStdString()) != std::string::npos) or ui->nombreBuscar->text().toStdString() == "") {
            //std::cout << "La subcadena está presente." << std::endl;
            if (inventario[i].Type == listTypes[selectTipeBusc] or selectTipeBusc == -1){
                if (inventario[i].Mod.Number == listMod[selectModBusc].Number or selectModBusc == -1){
                    QString tempNombre = QString::fromStdString(inventario[i].getIdNombre());
                    ui->listWidgetArmas->addItem(tempNombre);
                }
            }
        }
    }
    //cout << "filtrado" << endl;
}


void MainWindow::on_listWidgetTipoBuscar_itemClicked(QListWidgetItem *item)
{
    selectTipeBusc = ui->listWidgetTipoBuscar->row(item)-1;
}


void MainWindow::on_listWidgetModBuscar_itemClicked(QListWidgetItem *item)
{
    selectModBusc = ui->listWidgetModBuscar->row(item)-1;
}


void MainWindow::on_buttonAgregar_2_clicked()
{
    filtrarInventario();
}


void MainWindow::on_buttonEliminar_2_clicked()
{
    selectTipeBusc = -1;
    selectModBusc = -1;
    ui->nombreBuscar->setText("");
    filtrarInventario();
}

