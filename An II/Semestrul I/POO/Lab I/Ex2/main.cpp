#include <format>
#include <iostream>
#include <cmath>

double radical(double x){ return std::sqrt(x); }
double sinus(double x){ return std::sin(x); }
double exponential(double x){ return std::exp(x); }

double (*fp[3])(double) = {radical, sinus, exponential};

int main(){

    std::cout << " X \t Radical \t Sinus \t\t Exponential\n";
    for(float x = 1; x <= 10; x += 0.5){
        std::cout << std::format("{:3.1f}\t", x);

        for(int i = 0; i < 3; i++){
            std::cout << std::format("{:8f}\t", fp[i](x));
        }
        std::cout << std::endl;
    }

    return 0;
}