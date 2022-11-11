#include <string>

class Bebida {

     private: 
        string tipo;
        string sabor; 
        int tamaño; //tamaño en mililitros
        float costo;  

    public: 
        Bebida(){
            tipo = "Agua";
            sabor = "limon","Jamaica","Horchata";
            tamanio = 500;
            costo = 25;
        }
        string getTipo (){
            return tipo;
        }
        void sentSabor (string sab){
            Sabor = sab; 
        }
        int getTamanio(){
            return tamanio;
        }
        float getCosto(){
            return costo;
        }
        void imprimeDatos(){
            cout << "Tipo: "<< tipo << endl;
            cout << "Sabor: "<< sabor << endl;
            cout << "Tamaño: "<< tamanio <<endl;
            cout << "Costo: "<< costo << endl;
        }

};

