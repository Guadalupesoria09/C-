#include <string>

class Carne {

    private:
        string termino;
        int costos;
    
    public:
        Carne(){
            termino = "Medio""3/4""Well done";
            costos = 180;
        }
        void sentTermino (string ter){
            termino = ter; 
        }
        int getCostos(){
            return costos;
        }
        Void imprimeEsti(){
            cout << "Termino" << termino << endl;
            cout << "Costos" << costos << endl;
        }
};
