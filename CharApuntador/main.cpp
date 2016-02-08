#include <iostream>
#include <string.h>

using namespace std;

void imprimir(char* cadena)
{
    int i=0;
    while(cadena[i]!=0)
    {
        cout<<cadena[i];
        i++;
    }
    cout<<endl;
}

int tamano(char* str)
{
    int i = 0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}

char* concatenar(char* str1, char*str2)
{
    char* resultado = new char[10];
    int i=0;
    while(str1[i]!='\0')
    {
        resultado[i]=str1[i];
        i++;
    }
    int j=0;
    while(str2[j]!='\0')
    {
        resultado[i+j]=str2[j];
        j++;
    }
    return resultado;
}

int main()
{
    char* hola = "Hola";
    char* mundo = "Mundo";

    cout<<"--Char*--"<<endl;
    char* hola_mundo = concatenar(hola,mundo);
    cout<<hola_mundo<<endl;
    cout<<tamano(hola)<<endl;
    cout<<tamano(mundo)<<endl;
    cout<<tamano(hola_mundo)<<endl;

    cout<<"--String.h--"<<endl;
    //http://www.cplusplus.com/reference/cstring/?kw=string.h
    char* hola_mundo2 = new char[20];
    strcpy(hola_mundo2,hola);
    strcat(hola_mundo2,mundo);
    cout<<hola_mundo2<<endl;
    cout<<strlen(hola)<<endl;
    cout<<strlen(mundo)<<endl;
    cout<<strlen(hola_mundo2)<<endl;

    return 0;
}
