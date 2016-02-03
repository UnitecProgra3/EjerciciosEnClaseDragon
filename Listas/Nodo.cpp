#include "Nodo.h"

Nodo::Nodo(int valor)
{
    this->valor = valor;
    this->sig = NULL;
}

Nodo::~Nodo()
{
    //dtor
}
