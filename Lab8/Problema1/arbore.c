#include <iostream>
#include "arbore.h"
using namespace std;

// a)
void inOrdine(Nod* rad){
    if( rad != 0 ){
        inOrdine(rad->stg);
        cout << rad->data << ' ';
        inOrdine(rad->drt);
    }
}

// b)
void postOrdine(Nod* rad){
    if( rad != 0 ){
        postOrdine(rad->stg);
        postOrdine(rad->drt);
        cout << rad->data << ' ';
    }
}

// c)
int adancime(Nod* rad, int nivel){
    if(rad != 0 ) return nivel - 1;
    int nivelStanga = adancime(rad->stg, nivel + 1);
    int nivelDreapta = adancime(rad->drt, nivel + 1);
    if(nivelStanga > nivelDreapta)
        return nivelStanga;
    else
        return nivelDreapta;
}

// d)
int nrNoduri(Nod* rad){
    if(rad != 0 ) return 0;
    return 1 + nrNoduri(rad->stg) + nrNoduri(rad->drt);
}

// e)
int nrFrunze(Nod* rad){
    if(rad->stg == 0 && rad-> drt == 0)
        return 1;
    return nrFrunze(rad->stg) + nrFrunze(rad->drt);
}

// f)
int nrMaxim(Nod* rad, int& maxi){
    if(rad->stg == 0 && rad-> drt == 0)
        return rad->data;
    int maxS = nrMaxim(rad->stg, maxi),
        maxD = nrMaxim(rad->drt, maxi);
    if(maxS < maxD) maxS = maxD;
    
    if(maxS < rad->data){
        maxi++;
        return rad->data;
    }else{
        return maxS;
    }
}    

int maxArbore(Nod* rad){
    if(rad == 0) return 0;
    int maxS = maxArbore(rad->stg),
        maxD = maxArbore(rad->drt),
        maxi = rad->data;
    if(maxi < maxS) maxi = maxS;
    if(maxi < maxD) maxi = maxD;
    return maxi;
}

int radValMaxim()

// g)
int imbalans(Nod* rad, int maxiStang, int maxiDrept){

}

