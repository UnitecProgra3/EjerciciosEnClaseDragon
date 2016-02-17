#include <iostream>
#include "A.h"
#include "B.h"

using namespace std;

class MiOtraClase
{
public:
    int *y;
    int z;
    MiOtraClase()
    {
        y=new int(20);
        z=30;
    }
    ~MiOtraClase()
    {
        delete y;
    }
};

class MiClase
{
public:
    int *x;
    MiOtraClase *moc;
    MiClase()
    {
        x=new int(10);
        moc=new MiOtraClase();
    }
    ~MiClase()
    {
        delete x;
        delete moc;
    }
};

int main()
{
    cout<<pi<<endl;
    return 0;
}
