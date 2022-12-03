#include <iostream>
#include <vector>

#include "Pedido.h"
#include "Bebida.h"
#include "Carne.h"
#include "Pasta.h"

using namespace std;

int main()
{

    cout<<"Ristorante la acelerina\nPrograma de control de pedidos";
    int opc = 0;
    int folio = 1;
    vector< Pedido> Pedidos;
    do
    {
        
        system("cls");

        cout<<"Seleccione una opcion:\n\n"
        <<"1.-Generar pedido\n"
        <<"2.-Ver pedido\n"
        <<"3.-Generar cuenta\n"
        <<"4.-Salir\n\n";

        cin>>opc;
        cin.ignore(1024,'\n');

        switch (opc)
        {
        case 1:{
            Pedido nuevo = Pedido(folio);
            int opc_2 = 0;
            do
            {
                system("cls");
                cout<<"Seleccione una opcion para el pedido:\n\n"
                <<"1.-Agregar producto\n"
                <<"2.-Regresar\n\n";
                cin>>opc_2;
                cin.ignore(1024,'\n');

                switch (opc_2)
                {
                case 1:
                    nuevo.addProduct();
                    break;
                
                }

            }while(opc_2 != 2);
            Pedidos.push_back(nuevo);
            system("cls");
            cout<<"Folio del pedido: "<<nuevo.getNumero();
            cin.get();
            cin.ignore(1024,'\n');
            folio++;
        
            break;
        }
        case 2:{

            int clave;
            cout<<"Ingrese el numero del pedido: ";
            cin>>clave;
            cin.ignore(1024,'\n');

            for(int i = 0; i < Pedidos.size(); i++ )
            {
                int id = Pedidos[i].getNumero();

                if(id == clave)
                {
                    Pedidos[i].showProductos();
                    cin.get();
                    cin.ignore(1024,'\n');
                    break;
                }
            }
            break;
        }
        case 3:{

            int clave;
            cout<<"Ingrese el numero del pedido: ";
            cin>>clave;
            cin.ignore(1024,'\n');

            for(int i = 0; i < Pedidos.size(); i++ )
            {
                int id = Pedidos[i].getNumero();

                if(id == clave)
                {
                    cout<<"Pedido No. "<<id<<"\tCantidad de productos: "<<Pedidos[i].totalProductos()<<"\n\n";
                    Pedidos[i].showProductos();
                    cout<<"\nTotal: $ "<<Pedidos[i].getTotal()<<"\n\nGracias por venir regrese pronto";
                    cin.get();
                    cin.ignore(1024,'\n');
                    break;
                }
            }
            break;

        }
        default:
            break;
        }

    }
    while(opc != 4);

}
