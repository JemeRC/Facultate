#include <iostream>
#include "Ora.h"

void raport(const Ora& o){
    std::cout << "ora " << o.getOra() << "\n";
}

int main(){
    Ora o;
    if(!o.init(25,0))
        std::cout << "ora invalida\n";
    o.init(9,5);
    o.afiseaza();
    raport(o);
    return 0;
}