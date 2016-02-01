#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"

class Mago : public Personaje
{
    public:
        Mago();
        virtual ~Mago();
        void atacar();
    protected:
    private:
};

#endif // MAGO_H
