#include <iostream>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    int A[n+1][n+1] = {0};
    for(int x = 1; x <= m; x++){
        int i, j, cost;
        cin >> i >> j >> cost;
        A[i][j] = cost;
    }

    cout << endl << "Matricea de Adiacenta:" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << A[i][j] << ' ';
        cout << endl;
    }
    return 0;
}