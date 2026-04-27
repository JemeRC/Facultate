#pragma once

typedef int Atom;

struct Nod{
    Atom data;
    Nod *std, *drt;
};

// a)
void inOrdine(Nod* rad);

// b)
void postOrdine(Nod* rad);

// c)
int adancime(Nod* rad, int nivel);

// d)
int nrNoduri(Nod* rad);

// e)
int nrFrunze(Nod* rad);

// f)
int nrMaxim(Nod* rad, int maxi);
int radValMaxima(Nod* rad);

// g)
int imbalans(Nod* rad, int maxiStang, int maxiDrept);

