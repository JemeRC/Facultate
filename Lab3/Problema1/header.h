#ifndef HEADER_H
#define HEADER_H

typedef int Atom;
struct Elem{
    Atom data;
    Elem* suc;
};

void init(Elem*&);

// a.
void inserareElement(Elem*&, Atom); 

// b.
void afisareLista(Elem*);

// c.
int cautare(Elem*, Atom);

// d.
void inserareExacta(Elem*&, Atom, int);

// e.
void stergereExacta(Elem*&, int);

// f.
void K_element();


#endif