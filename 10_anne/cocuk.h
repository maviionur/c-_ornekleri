#ifndef COCUK_H
#define COCUK_H

#include "anne.h"
#include "baba.h"


class Cocuk : public Anne, protected Baba//annedeki publik �yeler bendede publik olsun babadaki publik �yeler �ocu�a protected ge�er.
{
    public:
        Cocuk();
        virtual ~Cocuk();

    protected:

    private:
};

#endif // COCUK_H
