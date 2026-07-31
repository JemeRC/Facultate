#include <iostream>
#include <climits>
using namespace std;

void DFS(int A[][255], int n, int i, int M[], int L[], int &poz){
    L[poz++] = i;
    M[i] = 1;
    for(int k = 1; k <= n; k++)
        if(A[i][k] != 0 && M[k] == 0)
            DFS(A,n,k,M,L,poz);
}

int main(){
    int n, m;
    cin >> n >> m;
    int A[255][255] = {0};
    for(int x = 1; x <= m; x++){
        int i, j, cost;
        cin >> i >> j >> cost;
        A[i][j] = cost;
    }
    
    int M[n+1] = {0}, L[n+1] = {0}, x;
    
    cout << endl;
    cout << "Nod Start: ";
    cin >> x;
    
    int poz = 1;
    DFS(A,n,x,M,L,poz);

    cout << "L = ";
    for(int i = 1; i<=n; i++)
        cout << L[i] << ' '; 

    return 0;
}