/*Ejercicio N°1
Un almacén necesita gestionar su inventario de productos. Cada producto tiene un número único de identificación (ID), y el sistema debe mantener el inventario organizado para realizar búsquedas rápidas de productos y permitir actualizaciones del stock.
Utilizar un árbol AVL para almacenar los IDs de los productos. El árbol debe mantenerse balanceado para garantizar búsquedas rápidas.
Crear un sistema con un menú que permita gestionar las siguientes opciones:
1.Insertar un código de producto.
2.Eliminar un código de producto.
3.Buscar un producto por código.
4.Imprimir el árbol (mostrando su estructura balanceada).
5.Salir del programa.*/
#include <iostream>
#include "Arbol/ArbolBinarioAVL.h"
using namespace std;

int main() {
    int op=1;
    ArbolBinarioAVL<int> Arbol;
    while (op!=5)
    {
        cout<<"Ingrese que accion quiere realizar"<<endl;
        cout<<"1.Agregar producto: Inserta un nuevo código de producto en el sistema."<<endl;
        cout<<"2.Eliminar producto: Elimina un código de producto del sistema."<<endl;
        cout<<"3.Buscar producto: Verifica si un código de producto existe en el inventario.."<<endl;
        cout<<"4.Mostrar inventario: Imprime el árbol AVL de productos para mostrar su estructura balanceada."<<endl;
        cout<<"5.Salir: Finaliza el programa."<<endl;
        cin>>op;
        int codigo;
        switch (op)
        {
            case 1:
                cin>>codigo;
                Arbol.put(codigo);
                break;
            
            case 2:
                cin>>codigo;
                Arbol.remove(codigo);
                break;
            
            case 3:
                cin>>codigo;
                try
                {
                    cout<<Arbol.search(codigo)<<endl;;
                }
                catch(int e)
                {
                    if(e==404)
                    {
                        cout<<"valor no encontrado"<<endl;
                    }
                }
                break;
            
            case 4:
                Arbol.print();
                break;
            default:
                cout<<"Ingrese un numero valido"<<endl;
                break;
        }
    }
    
    return 0;
}
