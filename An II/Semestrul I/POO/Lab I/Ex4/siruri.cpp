#include "siruri.h"

int siruri::str_length(const char *s){
    int nchar = 0;
    while( s[nchar] != '\0' ) nchar++;
    return nchar;
}


// a.
bool siruri::eq_mask(const char *sir, const char *masca){
    int len = siruri::str_length(sir);
    bool mascat = false;

    for(int i = 0; i < len; i++){
        if( sir[i] == *masca ) mascat = true;
    }

    return mascat;
}

// b.
bool siruri::eqcuv(const char *cuv, const char *tablou[]){
    bool gasit = false;
    
    int contor = 0;
    while(tablou[contor] != nullptr){
        bool pp = true;
        int i = 0;
        while(tablou[contor][i] != '\0' && cuv[i] != '\0'){
            if(tablou[contor][i] != cuv[i]){
                pp = false;
                break;
            }
            i++;
        }
        if(pp){
            gasit = true;
            break;
        }

        contor++;
    }

    return gasit;
}

    
// c.
char* siruri::strdel(char *s, int pos, int n){
    int len = siruri::str_length(s);

    if(pos + n > len){
        for(int i = pos; s[i] != '\0'; i++) 
            s[i] = '\0'; 
    }
    else{
        for(int i = pos; i - pos <= n && i + n - 1 != len; i++){
            s[i] = s[i+n];
        }
    }

    return s;
}

// d.
char* siruri::strins(char *s1, int pos, const char *s2){
    int len_s2 = siruri::str_length(s2);
    
    for(int i = pos; i - pos < len_s2; i++){
        s1[i] = s2[i - pos];
    }

    return s1;
}