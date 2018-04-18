#include "araba.h"

Araba::Araba()
{
    setX(5);
    setY(16);
    ciz();
}

Araba::~Araba()
{
    sil();
}
void Araba::ciz()
{
    cout<<termcolor::dark;
    cout<<termcolor::on_white;
    cout<<termcolor::yellow;

    termcolor::gotoxy(getX(), getY()  ); cout<<"|--\\  ";
    termcolor::gotoxy(getX(), getY()+1); cout<<"|   \\ ";
    termcolor::gotoxy(getX(), getY()+2); cout<<"|    |";
    termcolor::gotoxy(getX(), getY()+3); cout<<"|-0-0-";

}
void Araba::sil()
{
    cout<<termcolor::dark;
    cout<<termcolor::on_white;
    termcolor::gotoxy(getX(), getY()  ); cout<<"      ";
    termcolor::gotoxy(getX(), getY()+1); cout<<"      ";
    termcolor::gotoxy(getX(), getY()+2); cout<<"      ";
    termcolor::gotoxy(getX(), getY()+3); cout<<"      ";

}
