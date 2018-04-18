#include "dolar.h"

Dolar::Dolar()
{
    setX(79);
    setY(rand()%15 + 4);
    ciz();
}

Dolar::~Dolar()
{
    sil();
}
void Dolar::ciz()
{
    cout<<termcolor::dark;
    cout<<termcolor::on_white;
    termcolor::gotoxy(getX(), getY()  ); cout<<termcolor::green<<"$$$";
    termcolor::gotoxy(getX(), getY()+1); cout<<termcolor::green<<"$$$";
    termcolor::gotoxy(getX(), getY()+2); cout<<termcolor::green<<"$$$";
}
void Dolar::sil()
{
    cout<<termcolor::dark;
    cout<<termcolor::on_white;
    termcolor::gotoxy(getX(), getY()  ); cout<<"   ";
    termcolor::gotoxy(getX(), getY()+1); cout<<"   ";
    termcolor::gotoxy(getX(), getY()+2); cout<<"   ";
}

