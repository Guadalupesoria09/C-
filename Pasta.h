#include <string>

class Pasta {

    private:
        string estilo;
        int precio;
        string tama;

    public:
         Pasta(){
            estilo = "Ravioli","Lasaña","Espagueti";
            precio = 100,120,130;
            tama = "Chica","Mediana","Grande";
        }
       void sentEstilo (string est){
            estilo = est; 
        }
        int getPrecio (){
            return sabor;
        }
        void sentTama (string tam){
            tama = tam; 
        }
        void imprimeInfo(){
            cout << "Estilo: "<< estilo << endl;
            cout << "Precio: "<< precio << endl;
            cout << "Tamaños: "<< tama << endl;
        }

};
