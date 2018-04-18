#ifndef ENGEL_H
#define ENGEL_H

#include "Varlik.h"
#include "termcolor.hpp"


class Engel : public Varlik
{
    public:
        Engel();
        virtual ~Engel();
        void ciz();
        void sil();

    protected:

    private:
};

#endif // ENGEL_H
