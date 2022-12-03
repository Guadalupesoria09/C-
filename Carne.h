#ifndef CARNE_H
#define CARNE_H

#include <string>
#include "Producto.h"

using namespace std;

class Carne: public Producto{

    private: 

        string termino;

    public:

        Carne(string, float, string, string);
        void setTermino(string);
        string getTermino();
        void getInfo();


};


/*Costructor de la clase carne, hereda de productos.
Este tiene las variables:
(string) termino
(float) precio
(string) tamanio
(string) nombre
*/
Carne::Carne(string term, float pre, string tam, string nom): Producto(pre, tam, nom)
{

    Carne::termino = term;

};
//Devuelve el termino de la carne (string)
string Carne::getTermino()
{

    return Carne::termino;

};
//Establece el termino de la carne <string>
void Carne::setTermino(string term)
{

    Carne::termino = term ;

};

void Carne::getInfo()
{
    cout<<termino<<": ";
    Producto::getInfo();
    
}


#endif
