#ifndef TRIUNGHI_H
#define TRIUNGHI_H

#include "Punct.h"

// a.
class Triunghi {
    Punct a, b, c;

public:
    // b.
    bool init(Punct a, Punct b, Punct c);

    // c.
    double aria() const;
    double perimetru() const;
    bool esteDreptunghic() const;
    bool esteIsoscel() const;
    void afiseaza() const;

    // d.
    Triunghi& translateaza(int dx, int dy);
};

#endif