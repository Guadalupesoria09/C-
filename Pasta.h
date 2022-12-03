#ifndef PASTA_H
#define PASTA_H

#include <string>
#include "Producto.h"

using namespace std;

class Pasta: public Producto{

    private: 

        string tipo;

    public:

        Pasta(string, float, string, string);
        void setTipo(string);
        string getTipo();
        void getInfo();


};


/*Costructor de la clase pasta, hereda de productos.
Este tiene las variables:
(string) tipo
(float) precio
(string) tamanio
(string) nombre
*/
Pasta::Pasta(string tip, float pre, string tam, string nom): Producto(pre, tam, nom)
{

    Pasta::tipo = tip;

};
//Devuelve el tipo de pasta (string)
string Pasta::getTipo()
{

    return Pasta::tipo;

};
//Establece el tipo de pasta <string>
void Pasta::setTipo(string tip)
{

    Pasta::tipo = tip ;

};

void Pasta::getInfo()
{
    cout<<tipo<<": ";
    Producto::getInfo();
    
}

#endif
