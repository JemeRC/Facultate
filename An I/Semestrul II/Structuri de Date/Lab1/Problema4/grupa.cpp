#include <iostream>
#include "grupa.h"


void InitGrupa(Grupa& g){
    std::cin >> g.id >> g.nr;
    g.tab = new Student[g.nr];
    for(int i = 0; i < g.nr; i++)
        InitStudent(g.tab[i]);
}

void AfisGrupa(Grupa g){
    for(int i = 0; i < g.nr; i++)
        AfisStudent(g.tab[i]);
}

void StergeGrupa(Grupa& g){
    delete[] g.tab;
}

int NotaMaxima( Grupa& g ){
    int maxim = INT_MIN;
    for(int i = 0; i < g.nr; i++)
        if( g.tab[i].nota > maxim )
            maxim = g.tab[i].nota;
    return maxim;
}

int NotaMinima( Grupa& g ){
    int minim = INT_MAX;
    for(int i = 0; i < g.nr; i++)
        if( g.tab[i].nota < minim )
            minim = g.tab[i].nota;
    return minim;
}