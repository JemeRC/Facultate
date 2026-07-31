#pragma once

typedef int Atom;

struct Nod{
    Atom data;
    Nod *st,*dr;
};

void init(Nod *&radacina);

// a).
void inserare(Nod *&radacina, Atom valoare);

// b).
void preOrdine(Nod *radacina);
void inOrdine(Nod *radacina);
void postOrdine(Nod *radacina);

// c).
Nod* cautare(Nod *radacina, Atom valoare);

// d).
void stergere(Nod *&radacina, Atom valoare);


