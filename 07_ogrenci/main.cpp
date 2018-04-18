#include <iostream>
#include "ogrenci.h"

using namespace std;

int main()
{
    Ogrenci ogr("201510202315");
    ogr.setIsim("Mecnun Coksever");
    ogr.setVize(23);
    ogr.setFinal(35);
    ogr.bilgiYaz();

    cout<<"---------------------------------------"<<endl;

    Ogrenci ogr1("123456789087");
    ogr1.setIsim("Omer Erdemir");
    ogr1.setVize(44);
    ogr1.setFinal(63);
    ogr1.bilgiYaz();

    Ogrenci *op = new Ogrenci("123432425234");
    Ogrenci *iop = new Ogrenci("14325533544");
    op->setVize(78);
    op->bilgiYaz();

    delete op;
    delete iop;


    return 0;
}
