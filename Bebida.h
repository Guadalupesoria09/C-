#ifndef BEBIDA_H
#define BEBIDA_H

#include <string>
#include "Producto.h"

using namespace std;

class Bebida: public Producto{

    private: 

        string tipo;

    public:

        Bebida(string, float, string, string);
        void setTipo(string);
        string getTipo();
        void getInfo();


};


/*Costructor de la clase bebida, hereda de productos.
Este tiene las variables:
(string) tipo
(float) precio
(string) tamanio
(string) nombre
*/
Bebida::Bebida(string tip, float pre, string tam, string nom): Producto(pre, tam, nom)
{

    Bebida::tipo = tip;

};
//Devuelve el tipo de bebida (string)
string Bebida::getTipo()
{

    return Bebida::tipo;

};
//Establece el tipo de bebida <string>
void Bebida::setTipo(string tip)
{

    Bebida::tipo = tip ;

};

void Bebida::getInfo()
{
    cout<<tipo<<": ";
    Producto::getInfo();
    
}



#endif
