#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <vector>
#include <windows.h>
#include "termcolor.hpp"
#include "varlik.h"
#include "dolar.h"
#include "araba.h"

using namespace std;
void dolgu(int bx, int by,int sx,int sy, int r)
{
     int x,y;
     for(x=bx; x<sx; x++)
        for(y=by;y<sy;y++)
            {
                if(r==1)
                 cout<<termcolor::on_green;
                 else
                 {
                     cout<<termcolor::dark;
                    cout<<termcolor::on_white;
                 }


                 termcolor::gotoxy(x,y);
                 cout<<" "; // boþluk
            }
}
void ekran()
{
   dolgu(1,1,81,4,1);
   dolgu(1,4,81,22,2);
   dolgu(1,22,81,25,1);

}

int main()
{
    ekran();
    Dolar *para = new Dolar;
    Araba *Car = new Araba;
    int engelZaman = rand()% 30;
    long unsigned int frm = 0;
    long unsigned int Puan = 0;
    unsigned char tus;
    int dolarZaman = rand()% 30 + 50;
    vector<Dolar*>dolarlar;
    vector<Dolar*>::iterator dlr;
    bool devam = true;




    do
    {
        if(dolarZaman==frm)
        {
            Dolar *dlr = new Dolar;
            dolarlar.push_back(dlr);
            dolarZaman = rand()% 20 + 10 + frm;
        }
         if(para==NULL && dolarZaman==frm)
        {
            para = new Dolar;
        }
        if(para!=NULL)
           para->hareket(-1,0);

          if(kbhit())
        {
            tus = getch();
            if(tus == 'W' || tus=='w')
            {
                Car->hareket(0,-1);
            }
            else if(tus == 'S' || tus=='s')
            {
                Car->hareket(0,1);
            }

        }




      Sleep(50);



      frm++;

       if(para!=NULL && para->getX()<2)
        {
            delete para;
            para = NULL;
            dolarZaman = frm + rand()% 30;
        }




         if(para!=NULL&&
           Car->getX()+2>=para->getX()&&
           Car->getX()<=para->getX()+2&&
           Car->getY()+3>=para->getY()
           )
        {
           oldum(&devam);
        }

        termcolor::gotoxy(1,1);
        cout<<termcolor::on_green;
        cout<<termcolor::red;
        cout<<"frm="<<frm;
        termcolor::gotoxy(15,1);
        cout<<"Puan=";

    } while (1);

    getch();
    return 0;
}
