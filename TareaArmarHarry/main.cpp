#include "mainwindow.h"
#include "structs.h"

#include <QApplication>

const int maxInventario = 100;
int cantInventario = 0;
arma inventario[maxInventario];

string listTypes [] = {"Sword", "Long Sword", "Sword Staff", "Mace", "Axe","Grat Axe", "Wand", "Short Bow", "Bow", "Long Bow", "Handy Lance", "Spear", "Shield", "Hen", "Ultimate Handy Supreme Ultra Mega Hammer"};
int largoListTypes = 15;

Modifier listMod [] = {Modifier(1,"Fuego 1",20,0,0), Modifier(2,"Magia 1",0,35,-10), Modifier(3,"Velocidad 1",0,-5,15), Modifier(4,"Fuego 2",40,0,10), Modifier(5,"Magia 3",0,70,0), Modifier(6,"Velocidad Maxima",10,-30,150)};
int largoListMod = 6;


MainWindow *m;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    inventario[cantInventario]= arma(213,"Espada de fuego basica",listTypes[1],listMod[3]);
    cantInventario++;

    //cout << inventario[0].getString() << endl;

    MainWindow w;
    m = &w;
    w.show();
    return a.exec();
}



string obtenerArmaPorID(string idTemp){
    int idBusc = std::stoi(idTemp);

    for (int i = 0; i < cantInventario; i++){
        if (inventario[i].ID == idBusc){
            return inventario[i].getString();
        }
    }
    return "";
}

void eliminarArmaDelInventario(int posArma){
    for (int i = posArma-1; i < cantInventario; i++){
        inventario[i] = inventario[i+1];
    }
    cantInventario--;
}
