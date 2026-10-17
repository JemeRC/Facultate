#include "Ora.h"
#include <format>
#include <iostream>

bool Ora::init(int ora, int minut){
    if(0 <= ora <= 23 && 0 <= minut <= 59){

        // Nu aveau this-> 
        this->ora = ora;
        this->minut = minut;
        return true;
    }
    return false;
}

void Ora::afiseaza() const{
    std::cout << std::format("{:02}:{:02}\n", ora, minut);
}