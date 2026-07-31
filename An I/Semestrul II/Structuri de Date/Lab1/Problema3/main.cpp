#include <iostream>
#include "grupa.h"
using namespace std;

int main(){
    Grupa g;
    InitGrupa(g);

    char nume[30];
    cout << "Nume Student cautat: ";
    cin >> nume;

    Student* elev = CautaStudent_Nume(g, nume);
    if( elev == 0 )
        cout << "Nu s-a gasit studentul \n";
    else
        AfisStudent(*elev);

    StergeGrupa(g);
    return 0;
}