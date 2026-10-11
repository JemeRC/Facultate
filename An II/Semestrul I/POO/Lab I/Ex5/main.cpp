#include <iostream>
#include <fstream>
#include <format>

int main(){
    std::ifstream fin("numere.txt");
    std::ofstream fout("rezultat.txt");

    int n;
    fin >> n;
    if(!(1 <= n && n <= 100)){
        std::cerr << "Eroare la citire";
        return 1;
    }

    int v[100], S = 0;
    for(int i = 0; i < n; i++){
        fin >> v[i];
        S+= v[i];
    }
    fin.close();

    fout << "Suma: \t" << S << std::endl;
    fout << "Media:\t" << std::format("{:.2f}", float(S)/n) << std::endl;
    fout.close();
    return 0;
}
