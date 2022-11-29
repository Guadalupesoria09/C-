#ifndef ORDEN_H
#define ORDEN_H

using namespace std;
#include <iostream>
#include <string>

class Orden {

    protected:
        float precio;
        string tamanio;
        int cantidad;
    public:
        //Constructores
        Orden(float _pre, string _tam, int _cant) {
            precio = _pre;
            tamanio = _tam;
            cantidad = _cant;
        }

        //Getters
        float getPrecio() {
            return precio;
        }
        string getTamanio(){
            return tamanio;
        }
        int getCantidad(){
            return cantidad;
        }

        //Setters
        void setPrecio(float _pre) {
            precio = _pre;
        }
        void setTamanio(string _tam) {
            tamanio = _tam;
        }
        void setCantidad(int _cant) {
            cantidad = _cant;
        }

        int sumarSabor() = 0; 
        int sumarTipo() = 0; 
        int sumarTermino() = 0; 
        float totalCuenta(float totalCuentaB,float totalCuentaC,float totalCuentaP) {
            cout << "Total a pagar: " (totalCuentaB + totalCuentaC + totalCuentaP);
        }

};

#endif
