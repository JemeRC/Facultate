#include <iostream>
using namespace std;

void citire(int **A, int N){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> A[i][j];
}

void afisare(int **A, int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            cout << A[i][j] << ' ';
        cout << '\n';
    }
}

void afisareSpirata(int **A, int N){
    int pozitie = 0;
    while(N > pozitie){
        for(int i = pozitie; i < N; i++)
            cout << A[pozitie][i] << ' ';
        for(int i = pozitie + 1; i < N; i++)
            cout << A[i][N-1] << ' ';
        for(int i = N-2; i >= pozitie; i--)
            cout << A[N-1][i] << ' ';
        for(int i = N-2; i > pozitie; i--)
            cout << A[i][pozitie] << ' ';
        pozitie++;
        N--;
    }
}

int main(){

    int N = 0;
    do{
        cin >> N;
        if(N % 2 == 0) 
            cout << "Dimensiune para" << endl;
    }while(N % 2 == 0);

    int **A = new int*[N];
    for(int i = 0; i < N; i++){
        A[i] = new int[N]; 
    }
    citire(A,N);
    cout << endl;
    afisare(A, N);
    cout << endl;
    afisareSpirata(A, N);



    return 0;
}