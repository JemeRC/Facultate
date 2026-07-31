#include "header.h"
using namespace std;

int NextPos(int tail){
    tail++;
    if(tail == DIM) return 0;
    return tail;
}

void init(Queue& q){
    q.head = q.tail = 0;
};

void put(Queue& q, Atom valoare){
    if(isFull(q)) return;
    q.vect[q.tail] = valoare;
    q.tail = NextPos(q.tail);
}

Atom get(Queue& q){
    if(isEmpty(q)) return -1;
    int poz = q.head;
    q.head = NextPos(q.head);
    return q.vect[poz];    
}

Atom front(Queue q){
    if(isEmpty(q)) return -1;
    return q.vect[q.head];
}

bool isEmpty(Queue q){
    return q.tail == q.head;
}

bool isFull(Queue q){
    return NextPos(q.tail) == q.head;
}
