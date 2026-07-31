#include <iostream>
#include <stdio.h>
using namespace std;

void citire(int **A, int N){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> A[i][j];
}

void afisare(int **A, int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            printf("%3d ", A[i][j]);
        cout << '\n';
    }
}

void rotire90(int **A, int N){
    int limitaStangaSus = 0, limitaDreaptaJos = N-1;
    while(limitaStangaSus != limitaDreaptaJos){
        int v[limitaDreaptaJos - limitaStangaSus];
        std::cout << std::endl;
        for(int i = limitaStangaSus; i <=limitaDreaptaJos; i++){
            v[i] = A[limitaStangaSus][i];
            std::cout << v[i] << ' ';
        }
        std::cout << std::endl;
        
        int coltdreaptasus = A[limitaDreaptaJos][limitaDreaptaJos];

        for(int i = limitaStangaSus; i <= limitaDreaptaJos; i++){
            A[limitaStangaSus][i] = A[i][limitaDreaptaJos];
            A[i][limitaDreaptaJos] = A[limitaDreaptaJos][limitaDreaptaJos - ( i - limitaStangaSus)];
            A[limitaDreaptaJos][limitaDreaptaJos - ( i - limitaStangaSus)] = A[limitaDreaptaJos - ( i - limitaStangaSus)][limitaStangaSus];
        }

        A[limitaStangaSus][limitaDreaptaJos] = coltdreaptasus;

        for(int i = limitaStangaSus; i <= limitaDreaptaJos; i++)
            A[limitaDreaptaJos - ( i - limitaStangaSus)][limitaStangaSus] = v[i];


        std::cout << std::endl;
        afisare(A, N);
        std::cout << std::endl;

        limitaStangaSus++;
        limitaDreaptaJos--;
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

    rotire90(A, N);
    cout << endl;

    afisare(A, N);


    for(int i = 0; i < N; i++)
        delete[] A[i];
    delete[] A;


    return 0;
}