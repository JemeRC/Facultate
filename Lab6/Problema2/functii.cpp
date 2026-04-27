#include "header.h"

void init(Queue &q){
    q.head = q.tail = 0;
}

void put(Queue &q, Atom val){
    Elem* nod = new Elem;
    nod->data = val;
    if( q.tail == 0 ){ 
        q.tail = q.head = nod;
    }else{
        q.tail->suc = nod;
        q.tail = nod;
    }
}

Atom get(Queue &q){
    if(isEmpty(q)) return -1;
    Elem *nod = q.head;
    Atom val = q.head->data;
    if(q.tail == q.head) q.tail = 0;
    q.head = q.head->suc;
    delete nod;
    return val;
}

Atom front(Queue q){
    return q.head->data;
}

bool isEmpty(Queue q){
    return q.tail == 0;
}