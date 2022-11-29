#ifndef PASTA_H
#define PASTA_H

using namespace std;
#include <iostream>
#include <math.h>
#include <string>

#include "Orden.h"

class Pasta : public Orden {

    private:
        string tipo;
    public:
        // Constructores
        Pasta(float _pre, string _tam, int _cant, string _tip) : 
        Orden(_pre, _tam, _cant) {
            tipo = _tip;
        }
        // Getters
        string getTipo() {
            return tipo;
        }
        // Setters
        void setTipo(stirng _tip) {
            tipo = _tip;
        }
        // Métodos
        int sumarTipo(){
            ti += 1;
            return ti
        }
        float totalCuentaP() {
            return (ti*125);
            cout << "Preparando pasta(s)" << endl;
        }

};

#endif
