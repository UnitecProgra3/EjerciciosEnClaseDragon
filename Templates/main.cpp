#include <iostream>
#include <string.h>

using namespace std;

template<typename Tipo>
void imprimir(Tipo valor)
{
    cout<<valor<<endl;
}

template<typename Tipo>
Tipo sumar(Tipo a, Tipo b)
{
    Tipo respuesta = a + b;
    return respuesta;
}

template<typename Tipo1, typename Tipo2>
void imprimir2Valores(Tipo1 a, Tipo2 b)
{
    cout<<a<<endl;
    cout<<b<<endl;
}

template<typename Tipo1,typename Tipo2>
Tipo1 sumar(Tipo1 a,Tipo2 b)
{
    return a+b;
}

template<typename Tipo>
class MiClase
{
public:
    Tipo variable;
};

int main()
{
    MiClase<int> mc;
    mc.variable=10;
    cout<<mc.variable<<endl;

    MiClase<string> mc2;
    mc2.variable="test";
    cout<<mc2.variable<<endl;
    return 0;
}
