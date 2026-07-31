#include <iostream>
#include "header.h"
using namespace std;

void init(Nod *&radacina){
    radacina = 0;
}

// a).
void inserare(Nod *&radacina, Atom valoare){
    
    if(radacina == 0){
        radacina = new Nod;
        radacina->data = valoare;
        radacina->st = radacina->dr = 0;
        return;
    }

    int ok = 0;
    Nod* contor = radacina;
    while(!ok){
        if(valoare < contor->data){
            if(contor->st == 0){ 
                ok = 1;
                break;
            }
            contor = contor->st;
        }
        else if(valoare > contor->data){
            if(contor->dr == 0){
                ok = 2;
                break;
            }
            contor = contor->dr;
        }
        else{
            cout<<"Eroare: Valoarea "<< valoare <<" este deja in arbore! \n"; // Sistem anti-prost
            return;
        }
    }

    Nod *nodNou = new Nod();
    nodNou->data = valoare;
    nodNou->st = nodNou->dr = 0;
    if(ok == 1) contor->st = nodNou;
    if(ok == 2) contor->dr = nodNou;
    
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
    while(radacina != 0){
        if(valoare == radacina->data) return radacina;
        if(valoare < radacina->data) radacina = radacina->st;
        else radacina = radacina->dr;
    }
    return 0;
}

// d).

Nod* parinte(Nod *radacina, Nod* fiu){
    if(radacina == 0 || fiu == 0 || radacina == fiu) return 0; // Sistem anti-prost

    while(radacina->data != fiu->data){
        if(radacina->st == fiu || radacina->dr == fiu) return radacina;
        if(radacina->data > fiu->data) radacina = radacina->st;
        if(radacina->data < fiu->data) radacina = radacina->dr;
    }
    return 0;
}

void stergere(Nod *&radacina, Atom valoare){
    Nod* q = cautare(radacina, valoare);
    if(q == 0) return; // Sistem anti-prost


    if(q->st != 0 && q->dr != 0){
        Nod* victima = q->st;
        while(victima->dr != 0) 
            victima = victima->dr;
        
        q->data = victima->data;
        q = victima;
    }

    Nod* copil;
    if(q->st != 0)
        copil = q->st;
    else
        copil = q->dr; 

    Nod* p = parinte(radacina, q); 

    if(p == 0){
        radacina = copil;
    } else {
        if(p->st == q) p->st = copil;
        else p->dr = copil;
    }

    delete q;
}

