#include <iostream>
#include "dinamic.h"

int *citesteTablou(int *n){
   std::cin >> *n;
    
    int *v = new int[*n];
    for(int i = 0; i < *n; i++)
        std::cin >> *(v + i);

    return v;
}