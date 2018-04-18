#include <iostream>
#include <conio.h>
#include <windows.h>
#include "termcolor.hpp"


using namespace std;

int main()
{
 /*   termcolor::gotoxy(80,1);
    cout<<termcolor::blue<<"*";
    termcolor::gotoxy(1,25);
    cout<<termcolor::red;
    cout<<"B";
    getch();
    return 0;         */


    int x = 40;
    int y = 10;
    int dx = 1;
    int dy = 1;
    do
    {
      termcolor::gotoxy(x,y);
      cout<<"*";
      Sleep(50);
      termcolor::gotoxy(x,y);
      cout<<" ";
      x+=dx;
      y+=dy;
      if(y>23 || y<2) dy = -dy;
      if(x>79 || x<2) dx = -dx;



    } while (kbhit()==0);




return 0;

}
