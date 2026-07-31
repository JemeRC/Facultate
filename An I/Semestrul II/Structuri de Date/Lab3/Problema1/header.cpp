#include <iostream>
#include "header.h"
using namespace std;

void init(Elem*& cap){
    cap = 0;
}

// a) Inserare in fata listei
void inserareElement(Elem*& cap, Atom valoare){
    Elem* nou = new Elem;
    nou->data = valoare;
    nou->suc = cap;
    cap = nou;
}

// b)
void afisareLista(Elem* cap){
    while(cap != 0){
        cout << cap->data << ' ';
        cap = cap->suc;
    }
}

// c)
int cautare(Elem* cap, Atom X){
    while(cap != 0){
        if(cap->data == X) return 1;
        cap = cap->suc;
    }
    return 0;
}

// d)
void inserareExacta(Elem*& cap, Atom valoare, int pozitie){
    
    /// Primul element
    if( pozitie == 0 ){
        Elem* p = new Elem;
        p->data = valoare;
        p->suc = cap;
        cap = p;
        return;
    }

    /// Restul elementelor
    
    // P va fi elementul de dinainte de pozitie
    Elem* p = cap;
    for(int i = 0; i < pozitie - 1; i++)
        p = p->suc;
    Elem* nou = new Elem;
    nou->data = valoare;
    nou->suc = p->suc;
    p->suc = nou->suc;
}

// e)
void stergereExacta(Elem*& cap, int pozitie){

    /// Primul element
    if( pozitie == 0 ){
        cap = cap->suc;
        return;
    }

    /// Restul elementelor
    
    // P va fi elementul de dinainte de pozitie
    Elem* p = cap;
    for(int i = 0; i < pozitie - 1; i++)
        p = p->suc;
    Elem* q = p->suc;
    p->suc = q->suc;
    delete q;
}