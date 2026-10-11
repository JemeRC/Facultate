#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
#include <format>

struct Student{
    std::string nume;
    int grupa;
    std::vector<int> note;
};

// a.
std::vector<Student> citesteStudenti(const std::string& numeFisier){
    std::ifstream fin(numeFisier);
    if (!fin.is_open()) {
        std::cerr << "Eroare: Nu s-a putut deschide fisierul " << numeFisier << std::endl;
        return {};
    }

    std::vector<Student> listaStudenti; 
    Student s;
    int nrNote = 0;
    while(fin >> s.nume >> s.grupa >> nrNote){
        s.note.clear();

        for (int j = 0; j < nrNote; ++j) {
            int nota;
            fin >> nota;
            s.note.push_back(nota);
        }

        listaStudenti.push_back(s);
    }
    
    fin.close();
    return listaStudenti;
}

// b.
double medie(const std::vector<int>& note){
    if(note.empty()) return 0;

    int S = 0;
    for(int n : note) S += n;

    return float(S) / note.size();
}

// c.
enum class Criteriu {Nume, Medie, LungimeNume};


void sorteaza(std::vector<Student>& studenti, Criteriu criteriu, bool descrescator = false){
    bool ok;
    size_t len = studenti.size();

    if(criteriu == Criteriu::Nume){
        do {
            ok = true;
            for(int i = 0; i < len - 1; i++){
                if(descrescator ? studenti[i].nume < studenti[i+1].nume : studenti[i].nume > studenti[i+1].nume){
                    std::swap(studenti[i], studenti[i+1]);
                    ok = false;
                }
            }
        } while(!ok);
    } else if(criteriu == Criteriu::Medie){
        double medii[len];
        for(int i = 0; i < len; i++) medii[i] = medie(studenti[i].note);
        do {
            ok = true;
            for(int i = 0; i < len - 1; i++){
                if(descrescator ? medii[i] < medii[i+1] : medii[i] > medii[i+1]){
                    std::swap(studenti[i], studenti[i+1]);
                    std::swap(medii[i], medii[i+1]);
                    ok = false;
                }
            }
        } while(!ok);
    } else if(criteriu == Criteriu::LungimeNume){
        int lenName[len];
        for(int i = 0; i < len; i++) lenName[i] = studenti[i].nume.length();
        do {
            ok = true;
            for(int i = 0; i < len - 1; i++){
                if(descrescator ? lenName[i] < lenName[i+1] :  lenName[i] > lenName[i+1]){
                    std::swap(studenti[i], studenti[i+1]);
                    std::swap(lenName[i], lenName[i+1]);
                    ok = false;
                }
            }
        } while(!ok);
    }
}


// d.
void scrieRaport(const std::vector<Student>& studenti, std::ostream& out = std::cout){
    out << std::format("{:<3} {:<15} {:<5}  {:<15} {:<5}\n", "Nr.", "Nume", "Grupa", "Note", "Media");
    
    double sumaMedii = 0.0;

    for(size_t i = 0; i < studenti.size(); i++){
        std::string strNote = "";
        for(int n : studenti[i].note) {
            strNote += std::to_string(n) + " ";
        }

        double med = medie(studenti[i].note);
        sumaMedii += med;

        out << std::format("{:>3} {:<15} {:>5}  {:<15} {:>5.2f}\n", i+1, studenti[i].nume, studenti[i].grupa, strNote, med);
    }

    double mediaGenerala = sumaMedii / studenti.size();
    out << std::format("Media generala: {:.2f}\n", mediaGenerala);

}

// e.
const Student& celMaiBun(const std::vector<Student>& studenti){
    
    size_t Best = 0;
    for(size_t i = 1; i < studenti.size(); i++){
        if(medie(studenti[Best].note) < medie(studenti[i].note)) 
            Best = i;
    }

    return studenti[Best];
}

// f.
int main(){
    std::vector<Student> listaStudenti = citesteStudenti("studenti.txt");

    std::cout << "Criteriu: Nume | Crescator \n";
    sorteaza(listaStudenti, Criteriu::Nume, false);
    scrieRaport(listaStudenti);
    std::cout << std::endl;

    std::cout << "Criteriu: Nume | Descrescator \n";
    sorteaza(listaStudenti, Criteriu::Nume, true);
    scrieRaport(listaStudenti);
    std::cout << std::endl;

    std::cout << "Criteriu: Medie | Crescator \n";
    sorteaza(listaStudenti, Criteriu::Medie, false);
    scrieRaport(listaStudenti);
    std::cout << std::endl;

    std::cout << "Criteriu: Medie | Descrescator \n";
    sorteaza(listaStudenti, Criteriu::Medie, true);
    scrieRaport(listaStudenti);
    std::cout << std::endl;

    std::cout << "Criteriu: Lugime Nume | Crescator \n";
    sorteaza(listaStudenti, Criteriu::LungimeNume, false);
    scrieRaport(listaStudenti);
    std::cout << std::endl;

    std::cout << "Criteriu: Lungime Nume | Descrescator \n";
    sorteaza(listaStudenti, Criteriu::LungimeNume, true);
    scrieRaport(listaStudenti);
    std::cout << std::endl;

    std::ofstream fout("raport.txt");

    sorteaza(listaStudenti, Criteriu::Medie, true);
    scrieRaport(listaStudenti, fout);

    std::cout << "Studentul cu media cea mai mare: " << celMaiBun(listaStudenti).nume << std::endl;
    
    return 0;
}