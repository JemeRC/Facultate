#ifndef ORA_H
#define ORA_H

class Ora{
    int ora;
    int minut;

public:
    bool init(int ora, int minut);

    // Nu erau constante
    inline int getOra() const { return ora; }
    inline int getMinut() const { return minut; }
    void afiseaza() const;
};

#endif