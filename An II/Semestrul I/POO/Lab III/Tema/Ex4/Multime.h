#ifndef MULTIME_H
#define MULTIME_H

#include <vector>

class Multime{
    int elemente[100];
    int dimensiune;
    
    int cauta(int x) const;
public:
    void init() { dimensiune = 0; }
    bool adauga(int x);
    bool extrage(int x);
    bool contine(int x) const;
    int dimensiune() const { return dimensiune; }
    void afiseaza() const;

    Multime reuniune(const Multime& alta) const;
};

#endif