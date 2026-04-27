#ifndef HEADER_H_
#define HEADER_H_

typedef int Atom;

struct Elem{
    Atom data;
    Elem* suc;
    Elem* pre;
};

struct Lista{
    Elem *prim, *ultim;
};

void Init(Lista*&);
void InserareFata(Lista*& , Atom );
void AfisareLista(Lista*);
void InserareExacta(Lista*& , Atom , int );
void StergereExacta(Lista*& , int);

#endif