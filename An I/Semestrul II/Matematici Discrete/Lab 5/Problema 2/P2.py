import functii as f

def main():
    Univers1, Univers2, Univers3 = f.createUniverse()
    
    print(Univers1)
    print(Univers2)
    print(Univers3)
    print()
    
    rez, lista = f.Pct_a(Univers1, Univers2)
    print("Pct.a) este: ", rez)
    if(rez):
        print("Gruparile: ", lista)

    print()
    rez, lista = f.Pct_b(Univers1, Univers2)
    print("Pct.b) este: ", rez)
    if(rez):
        print("Gruparile: ", lista)

    print()
    rez, lista = f.Pct_c(Univers3)
    print("Pct.c) este: ", rez)
    if(rez):
        print("Gruparile: ", lista)

    print()
    rez, lista = f.Pct_d(Univers3)
    print("Pct.d) este: ", rez)
    print("Gruparile: ", lista)

if __name__ == '__main__':
    main()
        
