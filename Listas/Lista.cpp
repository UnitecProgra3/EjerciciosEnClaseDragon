#include "Lista.h"

Lista::Lista()
{
    inicio = NULL;
}

Lista::~Lista()
{
    //dtor
}

void Lista::agregar(int valor)
{
    Nodo *nodo = new Nodo(valor);
    if(inicio==NULL)
    {
        inicio=nodo;
    }else
    {
        Nodo*temp=inicio;
        while(temp->sig!=NULL)
        {
            temp=temp->sig;
        }
        temp->sig=nodo;
    }
}

void Lista::imprimir()
{
    for(Nodo*temp=inicio;
        temp!=NULL;
        temp=temp->sig)
        cout<<temp->valor<<endl;
}
