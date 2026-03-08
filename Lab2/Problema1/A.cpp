#include <cstdlib>
#include <iostream>

int nrOperatii;

void bubble_sort(int A[], int n){
    bool swapped = 1;                   nrOperatii++;
    int j = 0;                          nrOperatii++;
    while(swapped){
        swapped = 0;                    nrOperatii++;
        j = j + 1;                      nrOperatii++;
        for(int i = 0; i < n-j; i++){
            /* Pas */                   nrOperatii++;
            if( A[i] > A[i+1] ){        nrOperatii++;
                int temp = A[i];        nrOperatii++;
                A[i] = A[i+1];          nrOperatii++;
                A[i+1] = temp;          nrOperatii++;
                swapped = 1;            nrOperatii++;
                
            }
            /* Comparatie */            nrOperatii++;
        }
    }
}

void selection_sort(int A[], int n){
    for(int i = 0; i < n - 1; i++){
        /* Pas */                       nrOperatii++;
        int m = i;                      nrOperatii++;
        for(int j = i + 1; j < n; j++){
            /* Comparatie */            nrOperatii++;
            if( A[j] < A[m] ){          nrOperatii++;
                m = j;                  nrOperatii++;
            }
            /* Pas */                   nrOperatii++;
        }
        int temp = A[i];                nrOperatii++;
        A[i] = A[m];                    nrOperatii++;
        A[m] = temp;                    nrOperatii++;
        /* Comparatie */                nrOperatii++;
    }
}

void insertion_sort(int A[], int n){
    for(int k = 1; k < n; k++ ){
        int temp = A[k];
        int i = k - 1;
        while( i >= 1 && (A[i] > temp) ){
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = temp;
    }
}

int bruteforce_search(int A[], int n, int b){
    int i = 0;
    while( i < n ){
        if( A[i] == b )
            return i;
        i++;
    }
    return -1;
}

int binary_search(int A[], int n, int b){
    int st = 0;
    int dr = n-1;
    while( st <= dr ){
        int mij = (st + dr) / 2;
        if( A[mij] == b ) return mij;
        else if( A[mij] > b ){
                dr = mij - 1;
            }else{
                st = mij + 1;
            }
    }
    return -1;
}

void random_elements(int A[], int N){
    nrOperatii = 0;
    for(int i = 0; i < N; i++)
            A[i] = rand() % 100 + 1;
}

void ascending_elements(int A[], int N){
    nrOperatii = 0;
    for(int i = 0; i < N; i++)
        A[i] = i;
}

int main(){
    int N;
    std::cout << "N = ";
    std::cin >> N;
    std::cout << std::endl;
    int A[N];

    nrOperatii = 0;
    random_elements(A, N);
    bubble_sort(A, N);
    std::cout << "Bubble Sort: " << nrOperatii << " de operatii \n";




    return 0;
}