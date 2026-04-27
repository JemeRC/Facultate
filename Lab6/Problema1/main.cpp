#include <iostream>
#include "header.h"
using namespace std;

int main(void){
    Queue q;
    init(q);
    
    put(q, 1);
    put(q, 2);
    put(q, 3);
    put(q, 4);
    put(q, 5);

    cout << "Front: " << front(q) << endl;
    cout << "Get : " << get(q) << endl;
    cout << "Front: " << front(q) << endl;

    cout << "isFull: " << isFull(q) << endl;

    put(q, 6);

    cout << "isFull: " << isFull(q) << endl;

    return 0;
}