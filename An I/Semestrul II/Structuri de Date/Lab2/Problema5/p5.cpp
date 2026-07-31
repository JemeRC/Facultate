#include <iostream>
#include <ostream>
using namespace std;

void citire(int **A, int N){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> A[i][j];
}

void cautare(int **A, int N, int x, int &ix, int &jx){
    ix = jx = -1;
    int i = 0, j = 0;
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N && x >= A[i][j]; j++)
            if( A[i][j] == x ){
                ix = i;
                jx = j;
                return;
            }
}

int main(){
    int N;
    cin >> N;

    int **A = new int*[N];
    for(int i = 0; i < N; i++)
        A[i] = new int[N];

    citire(A, N);

    int x;
    cin >> x;

    int pozI, pozJ;
    cautare(A, N, x, pozI, pozJ);

    cout << "Pozitie I: " << pozI << endl
         << "Pozitie J: " << pozJ << endl;


    return 0;
}