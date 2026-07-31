def citireUnivers():
    Univers = []
    n = int(input("n = "))
    for i in range(0, n):
        print("Univers[",i,"] = ", end = '')
        Univers.append(int(input()))
    return Univers

def Q(x, y):
    return (x + y) == (x - y)

def Pct_a(Univers):
    listaValori = []
    rez = False
    for y in Univers:
        rez = rez or Q(5, y)
        if(Q(5, y)):
            listaValori.append(y)
    return rez, listaValori

def Pct_b(Univers):
    listaValori = []
    rez = False
    for x in Univers:
        rez = rez or Q(x, 4)
        if(Q(x, 4)):
            listaValori.append(x)
    return rez, listaValori

def Pct_c(Univers):
    listaValori = []
    rez = True
    for x in Univers:
        exista = False
        for y in Univers:
            exista = exista or Q(x, y)
            if(Q(x, y)):
                listaValori.append( (x, y) )
        rez = rez and exista
    return rez, listaValori

def Pct_d(Univers):
    listaValori = []
    rez = True
    for y in Univers:
        exista = False
        for x in Univers:
            exista = exista or Q(x, y)
            if(Q(x, y)):
                listaValori.append( (x, y) )
        rez = rez and exista
    return rez, listaValori


def Pct_e(Univers):
    listaValori = []
    rez = False
    for y in Univers:
        oricare = True
        for x in Univers:
            oricare = oricare and Q(x, y)
            if(Q(x, y)):
                listaValori.append( (x, y) )
        rez = rez or oricare
    return rez, listaValori