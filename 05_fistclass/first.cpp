#include "first.h"
#include <iostream>
using namespace std;
First::First()
{
    sayi=5;
    cout<<"nesne olu�tu\n";
}

First::~First()
{
     cout<<"nesne yok oldu\n"<<sayi<<"\n";
}

void First::ataSayi(int s)
{
    sayi = s;
}
