#include <iostream>
#include "header.h"
using namespace std;

void init(Nod *&radacina){
    radacina = 0;
}

// a).
void inserare(Nod *&radacina, Atom valoare){
    if(radacina == 0){
        Nod *nodNou = new Nod();
        nodNou->data = valoare;
        nodNou->st = nodNou->dr = 0;
        radacina = nodNou;
    }
    else{
        if(valoare < radacina->data)
            inserare(radacina->st, valoare);
        else if(valoare > radacina->data)
                inserare(radacina->dr, valoare);
    }
}

// b).
void preOrdine(Nod *radacina){
    if(radacina != 0){
        cout << radacina->data << ' ';
        preOrdine(radacina->st);
        preOrdine(radacina->dr);
    }
}
void inOrdine(Nod *radacina){
    if(radacina != 0){
        inOrdine(radacina->st);
        cout << radacina->data << ' ';
        inOrdine(radacina->dr);
    }
}
void postOrdine(Nod *radacina){
    if(radacina != 0){
        postOrdine(radacina->st);
        postOrdine(radacina->dr);
        cout << radacina->data << ' ';
    }
}

// c).
Nod* cautare(Nod *radacina, Atom valoare){
    if(radacina == 0) return 0;
    if(valoare == radacina->data) return radacina;
    if(valoare < radacina->data) return cautare(radacina->st, valoare);
    if(valoare > radacina->data) return cautare(radacina->dr, valoare);
}

// d).

Nod* parinte(Nod *radacina, Nod* fiu){
    if(radacina->st == fiu || radacina->dr == fiu) return radacina;
    if(radacina->data > fiu->data) return parinte(radacina->st, fiu);
    if(radacina->data < fiu->data) return parinte(radacina->dr, fiu);
    if(radacina->data == fiu->data) return 0;
}

// e).
Nod* removeGreatest(Nod*& rad){
    Nod* p;
    if( rad->dr == 0 ){
        p = rad;
        rad = rad->st;
        return p;
    }
    else return removeGreatest(rad->dr);
}

void deleteRoot(Nod*& rad)
{
    Nod* p = rad;
    if( rad->st==0) rad = rad->dr;
    else if( rad->dr==0) rad = rad->st;
    else {
        rad = removeGreatest(rad->st);
        rad->st = p->st;
        rad->dr = p->dr;
    }
    delete p;
}

void stergere(Nod *&radacina, Atom valoare){
    if(radacina==NULL)
        cout<<"Eroare: Valoarea "<< valoare <<"nu este in arbore!";
    else if( valoare < radacina->data ) stergere(radacina->st, valoare);
    else if( valoare > radacina->data ) stergere(radacina->dr, valoare);
    else deleteRoot(radacina);
}

