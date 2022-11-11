#include <iostream> 
using namespace std;

#include "Bebidas.h"
#include "Carne.h"
#include "Pasta.h"

int main(){

    Bebida agua;
    agua.tipo = "Agua";
    agua.setSabor("Horchata");
    agua.tamanio = 500;
    agua.costo = 25;

    Carne medio;
    carne.setTermino("medio");
    carne.costos = 180;

    Pasta lasaña;
    pasta.setEstilo("lasaña");
    pasta.precio = 120:
    pasta.setTama("Mediana");

    cout <<"Tipo: " << agua.tipo << endl;
    cout <<"Sabor: " << agua.getSabor() << endl;
    cout <<"Tamaño: " << agua.tamanio << endl;
    cout <<"Costo: " << agua.costo << endl;
    cout <<"Termino: " << carne.getTermino() << endl
    cout <<"Costo: " << agua.costo << endl;
    cout <<"Estilo: " << pasta.getEstilo() << endl;
    cout <<"Precio: " << pasta.precio << endl;
    cout <<"Tamaño: " << pasta.getTama() << endl;


    return 0;
}
