#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista<int> l;
    l.agregar(10);
    l.agregar(20);
    while(true)
    {
        l.agregar(40);
        l.borrar(40);
    }
//    Lista<int> l;
//    l.agregar(10);
//    l.agregar(20);
//    l.agregar(30);
//    l.borrar(10);
//    l.imprimir();
//
//    Lista<char*> l2;
//    l2.agregar("hola");
//    l2.agregar("mundo");
//    l2.agregar("test");
//    l2.borrar("hola");
//    l2.imprimir();

    return 0;
}
