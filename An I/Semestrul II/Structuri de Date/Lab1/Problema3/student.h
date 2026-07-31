#ifndef STUDENT_H_
#define STUDENT_H_

struct Student {
    char* nume;
    int   nota;
};

void InitStudent( Student& );
void AfisStudent( Student );
void StergeStudent( Student& );

#endif