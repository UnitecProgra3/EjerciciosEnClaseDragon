#include <iostream>
#include <vector>
#include <list>
#include <fstream>

using namespace std;

void escribir(string nombre_archivo, vector<int> numeros)
{
    ofstream out(nombre_archivo.c_str());
    for(int i=0;i<numeros.size();i++)
    {
        out<<numeros[i]<<endl;
    }
    out.close();
}

vector<int> leer(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    vector<int>respuesta;
    int num;
    while(in>>num)
    {
        respuesta.push_back(num);
    }
    in.close();
    return respuesta;
}

void escribirLista(string nombre_archivo, list<int> numeros)
{

}

list<int> leerLista(string nombre_archivo)
{

}

int main()
{
    vector<int> numeros;
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    escribir("archivo",numeros);

    cout<<leer("archivo")[0]<<endl;
    cout<<leer("archivo")[1]<<endl;
    cout<<leer("archivo")[2]<<endl;
    cout<<leer("archivo")[3]<<endl;
    return 0;
}
