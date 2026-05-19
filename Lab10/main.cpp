#include <iostream>
#include "header.h"
using namespace std;

int main(){
    Nod *rad;
    init(rad);
    
    Atom valoare;
    do{
        cin >> valoare;
        if(valoare == 0) break;
        inserare(rad, valoare);
    }while(valoare);

    cout << "Afisarea in inordine: ";
    inOrdine(rad);
    cout << endl;
    
    dealocare(rad);
    return 0;
}