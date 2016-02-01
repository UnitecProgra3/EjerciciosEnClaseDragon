#ifndef ARQUERO_H
#define ARQUERO_H

#include "Personaje.h"

class Arquero : public Personaje
{
    public:
        Arquero();
        virtual ~Arquero();
        void atacar();
    protected:
    private:
};

#endif // ARQUERO_H
