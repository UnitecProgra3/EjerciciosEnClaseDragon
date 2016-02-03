#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

template <typename T>
class Nodo
{
    public:
        T valor;
        Nodo*sig;
        Nodo(T valor)
        {
            this->valor = valor;
            this->sig = NULL;
        }
    protected:
    private:
};

#endif // NODO_H
