#ifndef STRUCTS_H
#define STRUCTS_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <iostream>
using namespace std;

#include <QString>
#include <QStringList>
#include <QMessageBox>

struct Modifier
{
    int Number;
    string Atribute;
    int Type [3];
    Modifier(){
        Number = 0;
        Atribute = "unknow";
        Type [0]= 0;
        Type [1]= 0;
        Type [2]= 0;
    }

    Modifier(int numTemp, string AtributeTemp, int atrTypeF, int atrTypeM,int atrTypeS) {
        Number = numTemp;
        Atribute = AtributeTemp;
        Type [0]= atrTypeF;
        Type [1]= atrTypeM;
        Type [2]= atrTypeS;
    }

    string getString(){
        string salida = "";
        salida += "--- Modfier ---\n";
        salida += "Number: "+to_string(Number)+"\n";
        salida += "Atribute: "+Atribute+"\n";
        salida += "Fire: "+to_string(Type[0])+"%\n";
        salida += "Magic: "+to_string(Type[1])+"%\n";
        salida += "Speed: "+to_string(Type[2])+"%\n";
        return salida;
    }

    string getStringShort(){
        string salida = "";
        salida += to_string(Number)+" | ";
        salida += Atribute+" | ";
        salida += "Fire: "+to_string(Type[0])+"% | ";
        salida += "Magic: "+to_string(Type[1])+"% | ";
        salida += "Speed: "+to_string(Type[2])+"% | ";
        return salida;
    }
};



struct arma
{
    int ID;
    string Name;
    string Type;
    Modifier Mod;

    arma(){
        ID = 0;
        Name = "unknow";
        Mod = Modifier();
    }

    arma(int idTemp, string nameTemp,string typeTemp,Modifier modTemp) {
        ID = idTemp;
        Name = nameTemp;
        Type = typeTemp;
        Mod = modTemp;
    }

    string getIdNombre(){
        string salida = "";
        salida += to_string(ID)+"\t";
        salida += Name;
        return salida;
    }

    string getString(){
        string salida = "";
        salida += "---  Arma  ---\n";
        salida += "ID: "+to_string(ID)+"\n";
        salida += "Name: "+Name+"\n";
        salida += "Type: "+Type+"\n";
        salida += Mod.getString();
        return salida;
    }

};


#endif // STRUCTS_H
