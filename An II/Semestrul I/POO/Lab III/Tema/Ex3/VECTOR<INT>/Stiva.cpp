#include <iostream>
#include "Stiva.h"

bool Stiva::push(int x){
    elemente.push_back(x);
    return true;
}

bool Stiva::pop(){
    if(esteGoala())
        return false;
    elemente.pop_back();
    return true;
}

void Stiva::afiseaza() const{
    for(int i = elemente.size() - 1; i >= 0; --i)
        std::cout << elemente[i] << " ";
    std::cout << "\n";
}