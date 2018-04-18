#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <windows.h>
#include "termcolor.hpp"
#include "star.h"




using namespace std;

int main()
{
    long unsigned int sayac = 0;
    srand(time(NULL));

    Star *halley;
    vector<Star *> starvec;
    vector<Star *>::iterator starit;

    do
    {
        if (sayac%100==0)
        {
            halley = new Star(rand()%75+1,rand()%20+2);
            starvec.push_back(halley);
        }
        for(starit=starvec.begin(); starit != starvec.end(); starit++)
        {
            (*starit)->ilerle();
        }
        halley->ilerle();
        Sleep(50);
        sayac++;

    } while (kbhit()==0);




    return 0;
}
