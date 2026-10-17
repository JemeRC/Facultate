#include <fstream>
#include <iostream>
#include <vector>
#include "Triunghi.h"


int main(){
    std::ifstream fin("puncte.txt");
    if(!fin.is_open()){
        std::cerr << "Eroare la deschiderea fisierului\n";
        return 1;
    }

    std::vector<Punct> puncte;
    int nrPuncte = 0;
    int x, y;
    while(fin >> x >> y){ 
        Punct a; a.x = x; a.y = y;
        puncte.push_back(a);
        nrPuncte++;   
    }

    int triunghiuri = 0;
    int tDreptunghice = 0;
    int tIsoscele = 0;

    double arieMaxima = 0.0;
    Triunghi maxim;

    Triunghi test;
    for(int i = 0; i < nrPuncte - 2; i++)
        for(int ii = i + 1; ii < nrPuncte - 1; ii++)
            for(int iii = ii + 1; iii < nrPuncte; iii++)
                if(test.init(puncte[i], puncte[ii], puncte[iii])){
                    triunghiuri++;
                    if(test.esteDreptunghic()) tDreptunghice++;
                    if(test.esteIsoscel()) tIsoscele++;

                    if(test.aria() > arieMaxima){
                        arieMaxima = test.aria();
                        maxim = test;
                    }
                }

    std::cout   << nrPuncte  << " puncte, " << triunghiuri << " triunghiuri, " 
                << tDreptunghice << " dreptunghice, " << tIsoscele << " isoscele\n";
    
    std::cout << "Aria maxima: "; maxim.afiseaza(); std::cout << std::endl;

    Triunghi translatat = maxim.translateaza(1, -1);
    std::cout << "Translatat: "; translatat.afiseaza(); std::cout << std::endl;

    fin.close();
    return 0;
}