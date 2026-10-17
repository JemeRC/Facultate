#ifndef STIVA_H
#define STIVA_H

#include <vector>

class Stiva{
    std::vector<int> elemente;

public:
    void init() { elemente.clear(); }
    bool push(int x);
    bool pop();

    int& top() { return elemente.back(); }
    
    bool esteGoala() { return elemente.empty(); }
    void afiseaza() const;
};

#endif