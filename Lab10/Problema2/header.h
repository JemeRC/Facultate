#pragma once

typedef int Atom;

struct Nod{
    Atom data;
    int bf;
    Nod *st, *dr;
};

void init(Nod*&);

void RSS(Nod*&);
void RSD(Nod*&);

void RDS(Nod*&);
void RDD(Nod*&);

void Echilibrare(Nod*&,Atom,bool);
void inserare(Nod*&,Atom);

void inOrdine(Nod*);

void dealocare(Nod*);