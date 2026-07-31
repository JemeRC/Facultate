#pragma once

typedef int Atom;

struct Elem{
    Atom data;
    Elem* suc;
};

struct Queue{
    Elem *head, *tail;
};

void init(Queue&);
void put(Queue&, Atom);
Atom get(Queue&);
Atom front(Queue);
bool isEmpty(Queue);
