#include <iostream>
#include <chrono>

std::chrono::time_point<std::chrono::system_clock> start, end;

void bubble_sort(int A[], int n){
    bool swapped = 1;
    int j = 0;
    while(swapped){
        swapped = 0;
        j = j + 1;
        for(int i = 0; i < n-j; i++)
            if( A[i] > A[i+1] ){
                int temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                swapped = 1;
            }
    }
}

void selection_sort(int A[], int n){
    for(int i = 0; i < n - 1; i++){
        int m = i;
        for(int j = i + 1; j < n; j++)
            if( A[j] < A[m] )
                m = j;
        int temp = A[i];
        A[i] = A[m];
        A[m] = temp;
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


int main(){

    int N = 0;
    std::cout << "N = ";
    std::cin >> N;
    std::cout << std::endl;
    int vect[N];


    std::cout << "Sortari: \n"
              << "1. bubble_sort \n"
              << "2. selection_sort \n"
              << "3. insertion_sort \n" 
              << std::endl
              << "Cautari: \n"
              << "4. bruteforce_search \n"
              << "5. binary_search \n"
              << std::endl
              << "Input: ";
    
    
    bool sortare;
    int valoareCautata;
    void (*functie_sortare)(int[],int);
    int (*functie_cautare)(int[],int,int);


    int optiune = -1;
    do{
        std::cin >> optiune;
        switch(optiune){
            case 1: sortare = 1;
                    functie_sortare = bubble_sort;
                    break;
            case 2: sortare = 1;
                    functie_sortare = selection_sort;
                    break;
            case 3: sortare = 1;
                    functie_sortare = insertion_sort;
                    break;
            case 4: sortare = 0;
                    functie_cautare = bruteforce_search;
                    break;
            case 5: sortare = 0;
                    functie_cautare = binary_search;
                    break;
            default: std::cout << "Valoare introdusa gresit \n"
                            << "Input: ";
                    optiune = -1;
        }
    }while(optiune == -1);
    std::cout << std::endl;

    if(sortare)
        for(int i = 0; i < N; i++)
            vect[i] = rand() % 100 + 1;
    else{
        std::cout << "Limitare de [0 ; " << N << "] \n";
        do{
            std::cout << "Valoare cautata: ";
            std::cin >> valoareCautata;
            if( 0 > valoareCautata || N < valoareCautata ) std::cout << "! Nu apartine intervalului ! \n";
        }while( 0 > valoareCautata || N < valoareCautata );

        std::cout << std::endl;
        for(int i = 0; i < N; i++)
            vect[i] = i;
    }

    start = std::chrono::system_clock::now();

    if(sortare)
        functie_sortare(vect, N);
    else
        functie_cautare(vect, N, valoareCautata);    
    
    end = std::chrono::system_clock::now();

    std::cout << "Start: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " ms" << std::endl;
    std::cout << "End: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " ms" << std::endl;
    
    return 0;
}
