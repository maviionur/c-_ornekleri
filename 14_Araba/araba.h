#ifndef ARABA_H
#define ARABA_H

#include "Varlik.h"
#include "termcolor.hpp"
using namespace std;


class Araba : public Varlik
{
    public:
        Araba();
        virtual ~Araba();
        void ciz();
        void sil();

    protected:

    private:
};

#endif // ARABA_H
