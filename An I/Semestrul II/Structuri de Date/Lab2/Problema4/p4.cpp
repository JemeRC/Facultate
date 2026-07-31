#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++) cin >> A[i];

    int maxSuma = -1, pozi = 0, pozj = -1;
    int S = 0, i = 0, pozInceputSir = 0;

    for(i = 0; i < N; i++){
        S += A[i];
        if(S > maxSuma ){
            maxSuma = S;
            pozi = pozInceputSir;
            pozj = i;
        }
        if( S < 0 ){ 
            pozInceputSir = i + 1;
            S = 0;
        }
        
    }

    cout << "Suma: " << maxSuma << endl;
    cout << "i: " << pozi << endl;
    cout << "j: " << pozj << endl;

    return 0;
}