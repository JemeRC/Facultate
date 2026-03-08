#ifndef GRUPA_H_
#define GRUPA_H_

#include "student.h"

struct Grupa {
    Student* tab;
    int nr;
    int id;
};

void InitGrupa ( Grupa& );
void AfisGrupa ( Grupa );
void StergeGrupa ( Grupa& );

int NotaMaxima ( Grupa );
int NotaMinima ( Grupa );

#endif
