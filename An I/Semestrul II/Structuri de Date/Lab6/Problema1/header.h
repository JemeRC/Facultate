#ifndef HEADER_H_
#define HEADER_H_

#define DIM 6
typedef int Atom;


struct Queue{
    int head, tail;
    Atom vect[DIM];
};

int NextPos(int);
void init(Queue&);
void put(Queue&, Atom);
Atom get(Queue&);
Atom front(Queue);
bool isEmpty(Queue);
bool isFull(Queue);

#endif