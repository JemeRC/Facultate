#include <iostream>
#include "Stiva.h"

int main(){
    Stiva s;
    s.init();

    s.push(4);
    s.push(3);
    std::cout << s.top() << "\n";

    s.push(9);
    s.pop();

    s.push(2);
    s.afiseaza();

    std::cout << sizeof(s) << "\n";

    return 0;
}