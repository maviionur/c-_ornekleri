#ifndef COCUK_H
#define COCUK_H

#include "anne.h"
#include "baba.h"


class Cocuk : public Anne, protected Baba//annedeki publik üyeler bendede publik olsun babadaki publik üyeler çocuða protected geçer.
{
    public:
        Cocuk();
        virtual ~Cocuk();

    protected:

    private:
};

#endif // COCUK_H
