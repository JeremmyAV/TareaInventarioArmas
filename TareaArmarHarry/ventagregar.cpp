#include "ventagregar.h"
#include "mainwindow.h"
#include "ui_ventagregar.h"
#include "structs.h"

extern arma inventario [];
extern int cantInventario;

extern string listTypes [];
extern int largoListTypes;
extern Modifier listMod [];
extern int largoListMod;

int agreType = -1;
int agreMod = -1;



extern MainWindow *m;

ventAgregar::ventAgregar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ventAgregar)
{
    ui->setupUi(this);


    for(int i = 0; i < largoListTypes; i++){
        QString tempType = QString::fromStdString(listTypes[i]);
        ui->listWidgetType->addItem(tempType);
    }

    for(int k = 0; k < largoListMod; k++){
        QString tempMod = QString::fromStdString(listMod[k].getStringShort());
        ui->listWidgetModifie->addItem(tempMod);
    }
}

ventAgregar::~ventAgregar()
{
    delete ui;
}


void ventAgregar::on_listWidgetModifie_itemClicked(QListWidgetItem *item)
{
    agreMod = ui->listWidgetModifie->row(item);
}


void ventAgregar::on_listWidgetType_itemClicked(QListWidgetItem *item)
{
    agreType = ui->listWidgetType->row(item);
}


void ventAgregar::on_pushButton_clicked()
{
    string IDAgregar = ui->lineEdit->text().toStdString();
    if (IDAgregar != ""){
        bool validID = std::all_of(IDAgregar.begin(), IDAgregar.end(), [](unsigned char c) { return std::isdigit(c); });
        if (validID){
            string NameAgregar = ui->lineEdit_2->text().toStdString();
            if (NameAgregar != ""){
                if (agreType != -1){
                    if (agreMod != -1){
                        inventario[cantInventario]= arma(std::stoi(IDAgregar),NameAgregar,listTypes[agreType],listMod[agreMod]);
                        cantInventario++;

                        //cout << "arma agregada con exito" << endl;
                        QMessageBox advertencia;
                        advertencia.setIcon(QMessageBox::Information);
                        advertencia.setWindowTitle("Agregado.");
                        advertencia.setText("Arma agregada con exito.");
                        advertencia.exec();

                        ui->lineEdit->setText("");
                        ui->lineEdit_2->setText("");

                        m->filtrarInventario();
                    }
                    else{
                        //cout << "debe elegir una modificacion para el arma" << endl;
                        QMessageBox advertencia;
                        advertencia.setIcon(QMessageBox::Warning);
                        advertencia.setWindowTitle("Error de modificador.");
                        advertencia.setText("Debe elegir una modificacion para el arma.");
                        advertencia.exec();
                    }
                }
                else{
                    //cout << "debe elegir un typo para el arma" << endl;
                    QMessageBox advertencia;
                    advertencia.setIcon(QMessageBox::Warning);
                    advertencia.setWindowTitle("Error de tipo.");
                    advertencia.setText("Debe elegir un typo para el arma.");
                    advertencia.exec();
                }
            }
            else{
                //cout << "debe ingresar un nombre" << endl;
                QMessageBox advertencia;
                advertencia.setIcon(QMessageBox::Warning);
                advertencia.setWindowTitle("Error de nombre.");
                advertencia.setText("Debe ingresar un nombre.");
                advertencia.exec();
            }
        }
        else{
            //cout << "debe unicamente numeros para el id" << endl;
            QMessageBox advertencia;
            advertencia.setIcon(QMessageBox::Warning);
            advertencia.setWindowTitle("Error de id.");
            advertencia.setText("El ID debe ser un numero entero.");
            advertencia.exec();
        }
    }
    else{
        //cout << "debe ingresar un id" << endl;
        QMessageBox advertencia;
        advertencia.setIcon(QMessageBox::Warning);
        advertencia.setWindowTitle("Error de ID.");
        advertencia.setText("Debe ingresar un ID.");
        advertencia.exec();
    }
}

