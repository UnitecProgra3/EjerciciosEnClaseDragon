#include <iostream>
#include <vector>
#include "Guerrero.h"
#include "Mago.h"
#include "Arquero.h"

using namespace std;

int main()
{
    vector<Personaje*>personajes;
    personajes.push_back(new Guerrero());
    personajes.push_back(new Mago());
    personajes.push_back(new Arquero());

    for(int i=0;i<personajes.size();i++)
    {
        personajes[i]->atacar();
    }

//    for(int i=0;i<personajes.size();i++)
//    {
//        if(personajes[i]->tipo=="Guerrero")
//        {
//            ((Guerrero*)personajes[i])->atacar();
//        }
//        if(personajes[i]->tipo=="Mago")
//        {
//            ((Mago*)personajes[i])->atacar();
//        }
//        if(personajes[i]->tipo=="Arquero")
//        {
//            ((Arquero*)personajes[i])->atacar();
//        }
//    }

    return 0;
}
