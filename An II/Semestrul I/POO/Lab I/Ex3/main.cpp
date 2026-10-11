#include <iostream>
#include "dinamic.h"

int main(){
    int n;
    int *v = citesteTablou(&n);

    for(int i = n-1; i >= 0; i--){
        std::cout << *(v + i) << ' ';
    }
    std::cout << std::endl;

    free(v);

    return 0;
}