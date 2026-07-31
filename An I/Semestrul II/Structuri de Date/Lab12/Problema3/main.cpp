#include <iostream>
using namespace std;

struct Nod{
    int val;
    Nod* suc;
};

struct Stiva{
    Nod* start;
    Nod* end;
};

void init(Stiva S){
    S.start = S.end = 0;
}

void push(Stiva &S, int valoare){
    Nod* nou = new Nod;
    nou->val = valoare;
    nou->suc = 0;
    if( S.end == 0 )
        S.start = S.end = nou;
    else{
        S.end->suc = nou;
        S.end = nou;
    }
}

int pop(Stiva &S){
    if(S.end == 0)
        return -1;
    Nod* p = S.start;
    S.start = S.start->suc;
    if(S.start == 0) S.end = 0;
    return p->val; 
}

bool isEmpty(Stiva S){
    if(S.end == 0) return true;
    return false;
}


void DFS(int A[][83127], int n, int i, int M[], int L[]){
    int poz = 1;
    Stiva stiva_DFS;    
    init(stiva_DFS);
    push(stiva_DFS,i);
    while(!isEmpty(stiva_DFS)){
        int j = pop(stiva_DFS);
        if(M[j] == 0){
            L[poz++] = j;
            M[j] = 1;
            for(int k = 1; k <= n; k++)
                if(A[j][k] == 1)
                    push(stiva_DFS,k);
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int A[n+1][n+1] = {0};
    for(int x = 1; x <= m; x++){
        int i, j, cost;
        cin >> i >> j >> cost;
        A[i][j] = cost;
    }
    
    int M[n+1] = {0}, L[n+1] = {0};
    DFS(A,n,1,M,L);

    for(int i = 1; i<=n; i++)
        cout << L[i] << ' '; 

    return 0;
}