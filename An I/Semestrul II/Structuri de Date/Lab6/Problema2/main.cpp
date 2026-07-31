#include "header.h"
#include <iostream>
using namespace std;

int main(void){
    Queue q;
    init(q);

    put(q, 1);
    put(q, 2);
    put(q, 3);
    put(q, 4);
    
    cout << "Front: " << front(q) << endl;
    cout << "Get: " << get(q) << endl;
    cout << "Get: " << get(q) << endl;
    cout << "Front: " << front(q) << endl;

    cout << "isEmpty: " << isEmpty(q) << endl;
    get(q); get(q);
    cout << "isEmpty: " << isEmpty(q) << endl;
    

    return 0;
}