#include <iostream>

using namespace std;

class Numero
{
public:
    Numero(int numero_param)
    {
        numero = numero_param;
    }
    void imprimir()
    {
        cout<<numero<<endl;
    }
    int operator+(Numero n)
    {
        return numero + n.numero;
    }
    int operator-(Numero n)
    {
        return numero - n.numero;
    }

    void operator++()
    {
        cout<<"Esta es una prueba"<<endl;
    }
private:
    int numero;
};

int main()
{
    Numero n1(10);
    Numero n2(20);
    cout<<n1+n2<<endl;
    cout<<n1-n2<<endl;
    ++n1;

    return 0;
}
