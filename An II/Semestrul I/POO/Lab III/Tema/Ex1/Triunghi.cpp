#include <iostream>
#include <cmath>
#include "Triunghi.h"

// e.
int laturaPatrata(Punct a, Punct b){
    int dx = b.x - a.x;
    int dy = b.y - a.y;
    return dx * dx + dy * dy;
}

void afiseazaPunct(Punct a){
    std::cout << '(' << a.x << ", " << a.y << ") ";
}

void translateazaPunct(Punct& a, int dx, int dy){
    a.x += dx;
    a.y += dy;
}

// a.
bool Triunghi::init(Punct a, Punct b, Punct c){
    if( (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x) == 0 )
        return false;
    this->a = a;
    this->b = b;
    this->c = c;
    return true;
}

// b.
double Triunghi::aria() const{
    return (abs((b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x)) / 2.0);
}

double Triunghi::perimetru() const{
    return (sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2)) + sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2)) + sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2)));
}

bool Triunghi::esteDreptunghic() const{
    int AB_patrat = laturaPatrata(a, b);
    int BC_patrat = laturaPatrata(b, c);
    int AC_patrat = laturaPatrata(c, a);

    if( AB_patrat == BC_patrat + AC_patrat ||
        BC_patrat == AB_patrat + AC_patrat ||
        AC_patrat == AB_patrat + BC_patrat)
        return true;
    return false;
}

bool Triunghi::esteIsoscel() const{
    int AB_patrat = laturaPatrata(a, b);
    int BC_patrat = laturaPatrata(b, c);
    int AC_patrat = laturaPatrata(c, a);

    if( AB_patrat == BC_patrat ||
        BC_patrat == AC_patrat ||
        AC_patrat == AB_patrat)
        return true;
    return false;
}

void Triunghi::afiseaza() const{
    afiseazaPunct(a); afiseazaPunct(b); afiseazaPunct(c);
    std::cout << "aria " << this->aria() << ", perimetrul " << this->perimetru();
}

// d.
Triunghi& Triunghi::translateaza(int dx, int dy){
    translateazaPunct(a, dx, dy);
    translateazaPunct(b, dx, dy);
    translateazaPunct(c, dx, dy);
    return *this;
}