#include "star.h"

Star::Star(int x, int y)
{
    mX=x;
    mY=y;
    mDX=1;
    mDY=1;
    termcolor::gotoxy(mX,mY);
    cout<<"*";

}

Star::~Star()
{
    termcolor::gotoxy(mX,mY);
    cout<<" ";
}
void Star::ilerle()
{
    termcolor::gotoxy(mX,mY);
    cout<<" ";
    mX+=mDX;
    mY+=mDY;
    if(mX>79 || mX<2) mDX = -mDX;
    if(mY>23 || mY<2) mDY = -mDY;
    termcolor::gotoxy(mX,mY);
    cout<<"*";

}
