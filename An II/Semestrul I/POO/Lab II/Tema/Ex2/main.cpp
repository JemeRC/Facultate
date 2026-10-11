#include <iostream>
#include <fstream>

// a.
void readAndShow(std::istream& fin, std::ostream& fout, std::string& final){
    std::string buffer;
    int line = 0;
    
    while(std::getline(fin, buffer)){
        final += buffer;
        fout << line << ' ' << buffer << '\n';
        line++;
    }
}

// b.
int numberOfWords(const std::string& string){
    int cuvinte = 0;
    size_t poz = 0;

    while(poz < string.length()){

        // Cautam primul cuvant
        poz = string.find_first_not_of(" \n(),./;:\'\"[]\\{}|_-=+!@#$%^&*`~", poz);

        if(poz == std::string::npos) break; // Iesit din fisier

        cuvinte++;

        // Cautam urmatoarea zona de spatii de dupa cuvant
        poz = string.find_first_of(" \n(),./;:\'\"[]\\{}|_-=+!@#$%^&*`~", poz);

        if(poz == std::string::npos) break; // Iesit din fisier
    }

    return cuvinte;
}

// c.
std::string longestWord(const std::string& string){
    size_t poz = 0, pozfinal = 0, maxpoz = 0;
    int maxlength = 0;

    while(poz < string.length()){

        poz = string.find_first_not_of(" \n(),./;:\'\"[]\\{}|_-=+!@#$%^&*`~", poz);
        if(poz == std::string::npos) break;

        pozfinal = string.find_first_of(" \n(),./;:\'\"[]\\{}|_-=+!@#$%^&*`~", poz);
        if(poz == std::string::npos) break;

        if(pozfinal - poz > maxlength){
            maxlength = pozfinal - poz;
            maxpoz = poz;
        }
        
        poz = pozfinal;
    }

    return string.substr(maxpoz, maxlength);
}

// d.
void inlocuiesteTot(std::string& text, const std::string& vechi, const std::string& nou){
    int poz = 0, n = vechi.size();
    while((poz = text.find(vechi)) != std::string::npos){
        text.replace(poz, n, nou);
        poz += nou.size();
    }
}

int main(){
    std::ifstream fin("text.txt");
    if(!fin.is_open()){
        std::cerr << "Eroare la deschiderea fisierului\n";
        return 1;
    }

    // a.
    std::string fisier;
    readAndShow(fin, std::cout, fisier);

    // b.
    std::cout << "Numar de cuvinte: " << numberOfWords(fisier) << '\n'; 

    // c.
    std::cout << "Cel mai lung cuvant: " << longestWord(fisier) << '\n';

    // d.
    std::ofstream fout("text_nou.txt");
    std::string vechi, nou;
    std::cout << "Cuvant de inlocuit: ";
    std::cin >> vechi;
    std::cout << "Cuvant cu care inlocuiesti: ";
    std::cin >> nou;

    inlocuiesteTot(fisier, vechi, nou);
    fout<<fisier;

    fin.close();
    fout.close();
    return 0;
}