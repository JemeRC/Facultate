
def createUniverse():
    Univers1 = []
    for i in range(-10,11):
        Univers1.append(i)
    Univers2 = []
    for i in range(-100,101):
        Univers2.append(i)
    Univers3 = []
    for i in range(-100,101, 1):
        Univers3.append(i/10)

    return Univers1, Univers2, Univers3

def Q(x, y):
    return x**2 == y

def P(x, y):
    return x*y == 1

def Pct_a(Univers1, Univers2):
    lista = []
    oricare = True
    for x in Univers1:
        exista = False
        for y in Univers2:
            exista = exista or Q(x, y)
            if(Q(x, y)):
                lista.append( (x, y) )
        oricare = oricare and exista
    return oricare, lista

def Pct_b(Univers1, Univers2):
    lista = []
    oricare = True
    for y in Univers2:
        exista = False
        for x in Univers1:
            exista = exista or Q(x, y)
            if(Q(x, y)):
                lista.append( (x, y) )
        oricare = oricare and exista
    return oricare, lista

def Pct_c(Univers3):
    lista = []
    exista = False
    for x in Univers3:
        oricare = True
        for y in Univers3:
            oricare = oricare and P(x, y)
            if(P(x, y)):
                lista.append( (x, y) )
        exista = exista or oricare
    return exista, lista

def Pct_d(Univers3):
    lista = []
    oricare = True
    for x in Univers3:
        exista = False
        for y in Univers3:
            exista = exista or P(x, y)
            if(P(x, y)):
                lista.append( (x, y) )
        oricare = oricare and exista
    return oricare, lista



