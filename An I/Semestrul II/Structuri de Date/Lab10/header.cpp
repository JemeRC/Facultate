#include <iostream>
#include "header.h"
using namespace std;

void init(Nod*& a){
    a = 0;
}

void RSS(Nod*& a){
    Nod *b;
    b = a->dr;
    a->dr = b->st;
    b->st = a;
    a->bf = b->bf = 0;
    a = b;
}

void RSD(Nod*& a){
    Nod *b;
    b = a->st;
    a->st = b->dr;
    b->dr = a;
    b->bf = a->bf = 0;
    a = b;
}


void RDS(Nod*& a){
    Nod *b, *c;
    b = a->dr;
    c = b->st;

    switch(c->bf){
        case 0: a->bf = b->bf = 0;
                break;
        case 1: a->bf = 0;
                b->bf = -1;
                break;
        case -1:a->bf = 1;
                b->bf = 0;
    }

    a->dr = c->st;
    b->st = c->dr;
    c->bf = 0;
    c->st = a;
    c->dr = b;
    a = c;
}

void RDD(Nod*& a){
    Nod *b, *c;
    b = a->st;
    c = b->dr;

    switch(c->bf){
        case 0: a->bf = b->bf = 0;
                break;
        case -1:a->bf = 0;
                b->bf = 1;
                break;
        case 1: a->bf = -1;
                b->bf = 0;
    }

    a->st = c->dr;
    b->dr = c->st;
    c->bf = 0;
    c->dr = a;
    c->st = b;
    a = c; 
}

bool Eq_Required = false;
void Echilibrare(Nod*& a,Atom x,bool stg){
    if(Eq_Required)
        if(stg == true){
            switch(a->bf) {
                case 1: Eq_Required = false;
                        (x < a->st->data)?RSD(a):RDD(a);
                        break;
                case 0: a->bf = 1;
                        break;
                case -1:a->bf = 0;
                        Eq_Required = false;
            }
        } else {
            switch(a->bf) {
                case -1:Eq_Required = false;
                        (x > a->dr->data)?RSS(a):RDS(a);
                        break;
                case 0: a->bf = -1;
                        break;
                case 1: a->bf = 0;
                        Eq_Required = false;
            }
        }
}

void inserare(Nod*& a, Atom x){
    if(a == 0){
        a = new Nod;
        a->data = x;
        a->st = a->dr = 0;
        a->bf = 0;
        Eq_Required = true;
        return;
    }

    if(x < a->data){
        inserare(a->st, x);
        if(Eq_Required) {
            Echilibrare(a, x, true);
        }
    } else if( x > a->data){
        inserare(a->dr, x);
        if(Eq_Required){
            Echilibrare(a, x, false);
        }
    } else {
        Eq_Required = false;
    }
}

void inOrdine(Nod *rad){
    if(rad != 0){
        inOrdine(rad->st);
        cout << rad->data << ' ';
        inOrdine(rad->dr);
    }
}

void dealocare(Nod* a){
    if(a != 0){
        dealocare(a->st);
        dealocare(a->dr);
        delete a;
        a = 0;
    }
}