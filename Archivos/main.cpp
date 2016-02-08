#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream escritura("mi_archivo.txt");
    escritura<<"a"<<endl;
    escritura<<"b"<<endl;
    escritura<<"c"<<endl;
    escritura.put('x');
    escritura.flush();
    escritura.close();

    ifstream lectura("mi_archivo.txt");

    string str;
    while(lectura>>str)
    {
        cout<<"->"<<str<<endl;
    }

    lectura.close();
//    while(!lectura.eof())
//    {
//        string str;
//        lectura>>str;
//        cout<<"->"<<str<<endl;
//    }

    return 0;
}
