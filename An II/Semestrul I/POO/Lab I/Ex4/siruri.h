#ifndef SIRURI_H
#define SIRURI_H

namespace siruri {
    int str_length(const char *s);

    // a.
    bool eq_mask(const char *sir, const char *masca);
    
    // b.
    bool eqcuv(const char *cuv, const char *tablou[]);
    
    // c.
    char *strdel(char *s, int pos, int n);

    // d.
    char *strins(char *s1, int pos, const char *s2);
};

#endif