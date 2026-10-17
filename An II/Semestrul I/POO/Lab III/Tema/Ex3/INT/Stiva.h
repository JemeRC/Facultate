#ifndef STIVA_H
#define STIVA_H

class Stiva{
    int elemente[100];
    int varf;

public:
    void init() { varf = -1; }
    bool push(int x);
    bool pop();

    int& top() { return elemente[varf]; }
    
    bool esteGoala() { return (varf == -1); }
    void afiseaza() const;
};

#endif