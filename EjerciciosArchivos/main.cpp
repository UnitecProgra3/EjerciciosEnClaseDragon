#include "Evaluador.h"
#include <fstream>
#include <math.h>
using namespace std;

//Las siguientes funciones escribir y leer ingresan y
//leen respectivamente un numero ubicado al inicio de un archivo de texto

void escribirNumeroTexto(string nombre_archivo, int num)
{
    ofstream out(nombre_archivo.c_str());
    out<<num;
    out.close();
}
int leerNumeroTexto(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str());
    int num;
    in>>num;
    return num;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo de texto
void escribirStringTexto(string nombre_archivo, string str)
{
}

string leerStringTexto(string nombre_archivo)
{
    return "";
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo binario
void escribirNumeroBinario(string nombre_archivo, int num)
{
}
int leerNumeroBinario(string nombre_archivo)
{
    return -1;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo binario
void escribirStringBinario(string nombre_archivo, string str)
{
}
string leerStringBinario(string nombre_archivo)
{
    return "";
}

//Devuelve true si encuentra str (dada) en un archivo de texto
//dado el nombre
bool existe(string nombre_archivo, string str)
{
    ifstream in(nombre_archivo.c_str());
    string temp;
    while(in>>temp)
    {
        if(str==temp)
        {
            return true;
        }
    }
    return false;
}

//Devuelve el numero mayor dado el nombre de un archivo binario
int obtenerMayor(string nombre)
{
    return -1;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
