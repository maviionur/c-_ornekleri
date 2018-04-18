#ifndef STAR_H
#define STAR_H
#include "termcolor.hpp"
#include <iostream>

using namespace std;


class Star
{
    public:
        Star(int x, int y);
        virtual ~Star();
        void ilerle();

    protected:

    private:
        int mX;
        int mY;
        int mDX;
        int mDY;


};

#endif // STAR_H
