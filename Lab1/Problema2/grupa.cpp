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