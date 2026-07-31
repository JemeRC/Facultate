#include "student.h"
#include <iostream>

void InitStudent( Student& s){
  s.nume = new char[20];
  std::cin >> s.nume >> s.nota;
}

void AfisStudent( Student s){
  std::cout << "Nume: " << s.nume << std::endl;
  std::cout << "Nota: " << s.nota << std::endl;
  std::cout << std::endl;
}

void StergeStudent( Student& s){
  delete[] s.nume;
}