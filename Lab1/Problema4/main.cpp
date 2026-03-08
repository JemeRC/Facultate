#include <iostream>
#include "grupa.h"
using namespace std;

int main(){
    Grupa g;
    InitGrupa(g);

    cout << "Nota Maxima: " << NotaMaxima(g) << endl;
    cout << "Nota Minima: " << NotaMinima(g) << endl;

    StergeGrupa(g);
    return 0;
}