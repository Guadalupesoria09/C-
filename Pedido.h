#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>
#include <vector>
#include <iostream>

#include "Pasta.h"
#include "Bebida.h"
#include "Carne.h"


//Clase donde se genera un pedido conformado por varios productos
class Pedido{

    private: 

        vector< Producto *> Productos;
        int numero;

    public:

        //Construcor
        Pedido(int);

        int getNumero();

        void showProductos();
        void addProduct();

        //Cantidad de productos
        int totalProductos();

        //Total
        float getTotal();


};


/*Constructor de los pedidos, esta clase tiene los elementos:
(vector) bebidas
(vector) carnes
(vector) pastas
int numero*/
Pedido::Pedido(int num)
{

    Pedido::numero = num;

};

int Pedido::getNumero()
{
    return(numero);
}

void Pedido::showProductos()
{
    for(int i = 0; i < Productos.size(); i++ )
    {
       Productos[i]->getInfo();
    }
};

void Pedido::addProduct(){

    string nombre,tamanio,tipo;
    float precio;

    cout<<"Ingrese el nombre del producto: ";
    cin>>nombre;
    cin.ignore(1024,'\n');
    cout<<"Ingrese el tamanio del producto: ";
    cin>>tamanio;
    cin.ignore(1024,'\n');
    cout<<"Ingrese el precio del producto: ";
    cin>>precio;
    cin.ignore(1024,'\n');

    int opc = 0;
    cout<<"Que tipo de producto es:\n"
    <<"1.- Pasta\n"
    <<"2.- Bebida\n"
    <<"3.- Carne\n\n";
    cin>>opc;
    cin.ignore(1024,'\n');
    switch (opc)
    {
    case 1:
        cout<<"Tipo de pasta: ";
        cin>>tipo;
        cin.ignore(1024,'\n');

        Productos.push_back(new Pasta(tipo,precio,tamanio,nombre));
        break;
    case 2:
        cout<<"Tipo de bebida: ";
        cin>>tipo;
        cin.ignore(1024,'\n');

        Productos.push_back(new Bebida(tipo,precio,tamanio,nombre));
        break;

    case 3:
        cout<<"Termino de la carne: ";
        cin>>tipo;
        cin.ignore(1024,'\n');

        Productos.push_back(new Carne(tipo,precio,tamanio,nombre));
        break;
    default:
        cout<<"Opcion no encontrada, producto sin especialidad";
        cin.get();
        cin.ignore(1024,'\n');
        Productos.push_back(new Producto(precio, tamanio, nombre));
        break;
    }

    
    system("cls");
    cout<<"Producto ingresado con exito";
    cin.get();





};

int Pedido::totalProductos()
{
    return(Productos.size() );  
};

float Pedido::getTotal()
{
    float total = 0;

    for(int i = 0; i < Productos.size(); i++ )
    {
       total += Productos[i]->getPrecio();
    }

    return total;

}


#endif
