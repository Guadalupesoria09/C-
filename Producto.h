#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include<iostream>

using namespace std;

class Producto {

    private: 

        float precio;
        string tamanio;
        string nombre;



    public:

        //Constructor
        Producto(float, string, string);

        //getters
        float getPrecio();
        string getTamanio();
        string getNombre();

        virtual void getInfo();

        //setters
        void setPrecio(float);
        void setTamanio(string);
        void setNombre(string);
        


};


/*Constructor de la clase productos
    este tiene las variables: 
    (float) precio
    (string) tamanio
    (string) nombre
*/
Producto::Producto(float pre, string tam, string nom)
{
    Producto::precio = pre;
    Producto::tamanio = tam;
    Producto::nombre = nom;

};

// Devuelve el precio (float)
float Producto::getPrecio()
{

    return Producto::precio;

};

//Devuelve el tamaño (string)
string Producto::getTamanio()
{

    return Producto::tamanio;

};

//Devuelve el nombre (string)
string Producto::getNombre()
{

    return Producto::nombre;

};

void Producto::getInfo()
{
    cout<<nombre<<"-"<<tamanio<<"\t\t\t\t$"<<precio<<"\n";
}

// Establece el precio <float>
void Producto::setPrecio(float pre)
{

    Producto::precio = pre ;

};

// Establece el tamaño <string>
void Producto::setTamanio(string tam)
{

    Producto::tamanio = tam ;

};

// Establece el nombre <string>
void Producto::setNombre(string nom)
{

    Producto::nombre = nom;

};


#endif
