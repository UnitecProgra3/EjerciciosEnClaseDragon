#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

template <typename T>
class Lista
{
    public:
        Nodo<T>* inicio;
        Lista()
        {
            inicio = NULL;
        }
        void agregar(Nodo<T> valor)
        {
            Nodo<T> *nodo = new Nodo<T>(valor);
            if(inicio==NULL)
            {
                inicio=nodo;
            }else
            {
                Nodo<T>*temp=inicio;
                while(temp->sig!=NULL)
                {
                    temp=temp->sig;
                }
                temp->sig=nodo;
            }
        }
        void imprimir()
        {
            for(Nodo<T>*temp=inicio;
                temp!=NULL;
                temp=temp->sig)
                cout<<temp->valor<<endl;
        }
        void borrar(T valor)
        {
            Nodo<T>*temp = inicio;
            if(inicio->valor==valor)
            {
                Nodo<T>* nodo_a_liberar = inicio;
                inicio=inicio->sig;
                delete nodo_a_liberar;
            }
            else
            {
                while(temp->sig->valor!=valor)
                {
                    temp=temp->sig;

                    if(temp->sig==NULL)
                    {
                        cout<<"El valor buscado no existe."<<endl;
                        return;
                    }
                }
                Nodo<T>* nodo_a_liberar = temp->sig;
                temp->sig=temp->sig->sig;
                delete nodo_a_liberar;
            }
        }
        bool existe(T valor)
        {

        }
        T obtenerUltimoValor()
        {

        }
    protected:
    private:
};

#endif // LISTA_H
