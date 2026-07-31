#include <iostream>
#include "header.h"
using namespace std;

int main(){
    Nod* radacina;
    init(radacina);
    cout << "a)." << endl;
    int x;
    do{
        cout << "Insereaza valoare: ";
        cin >> x;
        inserare(radacina, x);
    }while( x != 0);

    cout <<"b)." << endl;
    cout << "PreOrdine: ";
    preOrdine(radacina);
    cout << endl << "InOrdine: ";
    inOrdine(radacina);
    cout << endl << "PostOrdine: ";
    postOrdine(radacina);
    cout << endl;

    cout <<"c)." << endl;
    cout << "Valoare cautata: ";
    cin >> x;
    if(cautare(radacina, x) != 0)
        cout <<"A fost gasit " << x << " in arbore";
    else
        cout <<"Nu a fost gasit " << x <<" in arbore";
    cout << endl;

    cout <<"d)." << endl;
    cout << "Valoare de sters: ";
    cin >> x;
    stergere(radacina, x);
    cout <<"Arborele ramas in Inordine: ";
    inOrdine(radacina);
    cout << endl;

    return 0;


}