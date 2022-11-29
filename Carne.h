#ifndef CARNE_H
#define CARNE_H

using namespace std;
#include <iostream>
#include <math.h>
#include <string>

#include "Orden.h"

class Carne : public Orden {

    private:
        string termino;
    public:
        // Constructores
        Bebida(float _pre, string _tam, int _cant, string _term) : 
        Orden(_pre, _tam, _cant) {
            termino = _term;
        }
        // Getters
        string getTermino() {
            return termino;
        }
        // Setters
        void setTermino(stirng _term) {
            termino = _term;
        }
        // Métodos
        int sumarTermino(){
            termi += 1;
            return termi
        }
        float totalCuentaB() {
            return (termi*150);
            cout << "Preparando corte(s)" << endl;
        }

};

#endif
