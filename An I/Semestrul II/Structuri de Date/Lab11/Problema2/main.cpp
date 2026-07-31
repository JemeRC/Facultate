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

void RETRO(int i){
    int parinte = i;
    int fiu = 2*i;
    while(fiu <= n){
        if(fiu+1 <= n && heap[fiu] < heap[fiu+1])
            fiu = fiu+1;
        if( heap[fiu] > heap[parinte]){
            int aux = heap[fiu];
            heap[fiu] = heap[parinte];
            heap[parinte] = aux;
            parinte = fiu;
            fiu = fiu*2;
        } else fiu = n+1;
    }
}


void BUILD_HEAP(){
    for(int i = n/2; i >= 1; i--)
        RETRO(i);
}



int main(){
    int x;
    n = 0;
    do{
        cin >> x;
        if(x == 0) break;
        inserare(x);
    }while(true);

    int n_cpy = n + 1;
    BUILD_HEAP();
    for(int i = 1; i < n_cpy; i++)
        cout << heap[i] << ' ';

    return 0;
}