#include "engel.h"

Engel::Engel()
{
    setX(79);
    setY(rand()%15 + 4);
    ciz();

}

Engel::~Engel()
{
    sil();
}
void Engel::ciz()
{
    // buraya if koy. engel.h de private bool de�i�ken tan�mla engel tipine g�re �iz

    cout<<termcolor::dark;
    cout<<termcolor::on_white;
    termcolor::gotoxy(getX(), getY()  ); cout<<termcolor::dark<<"HHH";
    termcolor::gotoxy(getX(), getY()+1); cout<<termcolor::dark<<"HHH";
    termcolor::gotoxy(getX(), getY()+2); cout<<termcolor::dark<<"HHH";
}
void Engel::sil()
{
        cout<<termcolor::on_blue;
    termcolor::gotoxy(getX(), getY()  ); cout<<"   ";
    termcolor::gotoxy(getX(), getY()+1); cout<<"   ";
    termcolor::gotoxy(getX(), getY()+2); cout<<"   ";
}
