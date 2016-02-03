#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista
{
    public:
        Nodo* inicio;
        Lista();
        virtual ~Lista();
        void agregar(int valor);
        void imprimir();
    protected:
    private:
};

#endif // LISTA_H
