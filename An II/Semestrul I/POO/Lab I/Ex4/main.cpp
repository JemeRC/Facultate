#include <iostream>
#include "siruri.h"

int main(){
    const char *tablou [ 100 ] = { "curs1" , "curs2" , "curs3" };
    const char *cuv1 = "curs2" , * cuv2 = "curs5" ;
    std::cout   << "curs2 " << ( siruri::eqcuv(cuv1, tablou) ? "este" : "nu este" ) << " in tablou \n" ;
    std::cout   << "curs5 " << ( siruri::eqcuv(cuv2, tablou) ? "este" : "nu este" ) << " in tablou \n" ;
    
    char s[10] = "testban";
    std::cout << siruri::strdel(s, 3, 3) << std::endl;

    char s1[10] = "test";
    char s2[5] = "best";
    std::cout << siruri::strins(s1, 3, s2) << std::endl;
    return 0;
}