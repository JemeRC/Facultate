#include <iostream>
#include "header.h"
using namespace std;

void Init(Lista*& l){
    l->prim = 0;
    l->ultim = 0;
}

void InserareFata(Lista*& l, Atom valoare ){
    Elem* p = new Elem;
    p->data = valoare;
    p->suc = l->prim;
    p->pre = 0;
    if(l->prim != 0)
        l->prim->pre = p;
    else{
        l->ultim = p;
    }
    l->prim = p;
}

void AfisareLista(Lista* l){
    Elem *p = l->prim;
    while(p != 0){
        cout << p->data << ' ';
    }
    cout << endl;
}
void InserareExacta(Lista*& l , Atom valoare , int poz ){
    Elem *p = l->prim;
    int pozP = 1;
    while(pozP < poz && p->suc != 0){
        pozP++;
        p = p->suc;
    }
    if(pozP != poz){
        cout << "Pozitie imposibila\n";
        return;
    }
    
}
void StergereExacta(Lista*& , int);