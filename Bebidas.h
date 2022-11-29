#ifndef BEBIDAS_H
#define BEBIDAS_H

using namespace std;
#include <iostream>
#include <math.h>
#include <string>

#include "Orden.h"

class Bebida : public Orden {

    private:
        string sabor;
    public:
        // Constructores
        Bebida(float _pre, string _tam, int _cant, string _sab) : 
        Orden(_pre, _tam, _cant) {
            sabor = _sab;
        }
        // Getters
        string getSabor() {
            return sabor;
        }
        // Setters
        void setSabor(stirng _sab) {
            sabor = _sab;
        }
        // Métodos
        int sumarSabor(){
            sabo += 1;
            return sabor
        }
        float totalCuentaB() {
            return (sabo*25);
            cout << "Preparando bebida(s)" << endl;
        }

};

#endif
