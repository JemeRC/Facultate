import functii as f

def main():
    Univers = f.citireUnivers()
    rez, lista = f.Pct_a(Univers)
    print("Pct.a) este: ", rez)
    if(rez):
        print("Valori pentru y care satisfac conditia: ", lista)

    print()
    rez, lista = f.Pct_b(Univers)
    print("Pct.b) este: ", rez)
    if(rez):
        print("Valori pentru y care satisfac conditia: ", lista)

    print()
    rez, lista = f.Pct_c(Univers)
    print("Pct.c) este: ", rez)
    if(rez):
        print("Gruparile: ", lista)

    print()
    rez, lista = f.Pct_d(Univers)
    print("Pct.d) este: ", rez)
    if(rez):
        print("Gruparile: ", lista)
 
    print()
    rez, lista = f.Pct_e(Univers)
    print("Pct.e) este: ", rez)
    if(rez):
        print("Gruparile: ", lista)

if __name__ == '__main__':
    main()