#include <iostream>
using namespace std;
#define DIMMAX 100

int heap[DIMMAX+1];
int n;


void inserare(int valoare){
    heap[++n] = valoare;
    int j = n, i = n/2;
    while(i != 0){
        if(heap[j] > heap[i]){
            int aux = heap[j];
            heap[j] = heap[i];
            heap[i] = aux;
        } else break;
        j = i;
        i = i / 2;
    }
}

int stergere(){
    int ret = heap[1];
    heap[1] = heap[n--];

    int i = 1;
    while(i < n){
        int fiu = (heap[i*2] > heap[i*2 + 1])? i*2 : i*2+1;
        if(heap[i] < heap[fiu]){
            int aux = heap[i];
            heap[i] = heap[fiu];
            heap[fiu] = aux;
            i = fiu;
        } else break;
    }
    return ret;
}

int main(){
    int x;
    n = 0;
    do{
        cin >> x;
        if(x == 0) break;
        inserare(x);
    }while(true);

    while(n != 0){
        cout << stergere() << ' ';
    }
    return 0;
}