#include "Multime.h"

void Multime:cauta(int x) const {
    for (int i = 0; i < dimensiune; i++) {
        if (elemente[i] == x) {
            return i;
        }
    }
    return -1;
}

bool Multime::adauga(int x) {
    if (dimensiune >= 100 || cauta(x) != -1) {
        return false;
    }
    elemente[dimensiune++] = x;
    return true;
}

bool Multime::extrage(int x) {
    int index = cauta(x);
    if (index == -1) {
        return false;
    }
    for (int i = index; i < dimensiune - 1; i++) {
        elemente[i] = elemente[i + 1];
    }
    dimensiune--;
    return true;
}

bool Multime::contine(int x) const {
    return (cauta(x) != -1);
}

void Multime::afiseaza() const {
    for (int i = 0; i < dimensiune; i++) {
        std::cout << elemente[i] << ' ';
    }
    std::cout << std::endl;
}

Multime Multime::reuniune(const Multime& alta) const {
    Multime rezultat;
    rezultat.init();
    
    for (int i = 0; i < dimensiune; i++) {
        rezultat.adauga(elemente[i]);
    }
    
    for (int i = 0; i < alta.dimensiune; i++) {
        rezultat.adauga(alta.elemente[i]);
    }
    
    return rezultat;
}