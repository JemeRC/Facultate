#include <iostream>
#include "Stiva.h"

bool Stiva::push(int x){
    if(varf == 99)
        return false;
    elemente[++varf] = x;
    return true;
}

bool Stiva::pop(){
    if(esteGoala())
        return false;
    --varf;
    return true;
}

void Stiva::afiseaza() const{
    for(int i = varf; i >= 0; --i)
        std::cout << elemente[i] << " ";
    std::cout << "\n";
}