#include <iostream>
using namespace std;

#include "Bebida.h"
#include "Pasta.h"
#include "Carne.h"
#include "Restaurant.h"

int main() {

    Bebida b1(25, "grande", 1, "Limón");
    Bebida b2(25, "mediana", 1, "Horchata");
    Pasta p2(125, "chica", 1, "Lasaña");
    Pasta p1(125, "mediana", 1, "Bolañeza");
    Carne c1(150, "mediana", 1, "medio");
    Carne c2(150, "grande", 1, "3/4");

    Restaurante rest;
    rest.agregarOrden(b1);
    rest.agregarOrden(b2);
    rest.agregarOrden(p1);
    rest.agregarOreden(p2);
    rest.agregarOreden(c1);
    rest.agregarOreden(c2);

    rest.restaurant();


    return 0;
}
