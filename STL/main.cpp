#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main()
{
    //Vector
    cout<<"---Vector---"<<endl;
    vector<int> mi_vector;
    mi_vector.push_back(10);
    mi_vector.push_back(20);
    mi_vector.push_back(30);

    for(int i=0;i<mi_vector.size();i++)
    {
        cout<<mi_vector[i]<<endl;
    }

    //List
    cout<<"---List---"<<endl;
    list<int> mi_lista;
    mi_lista.push_back(10);
    mi_lista.push_back(20);
    mi_lista.push_back(30);
    for(list<int>::iterator temp=mi_lista.begin();
        temp!=mi_lista.end();
        temp++)
    {
        cout<<*temp<<endl;
    }

    //Mapa
    cout<<"---Map---"<<endl;
    map<string,int> mi_mapa;
    mi_mapa["A"]=10;
    mi_mapa["B"]=20;
    mi_mapa["C"]=30;

    cout<<mi_mapa["A"]<<endl;
    cout<<mi_mapa["B"]<<endl;
    cout<<mi_mapa["C"]<<endl;

    return 0;
}
