#include "siruri.h"

int siruri::str_length(const char *s){
    int nchar = 0;
    while( s[nchar] != '\0' ) nchar++;
    return nchar;
}