
def reuniune(A,B):
    rez = set()
    for x in A:
        if x not in B:
            rez.add(x)
    for x in B:
        rez.add(x)

    return rez

def diferenta(A,B):
    rez = set()
    for x in A:
        if x not in B:
            rez.add(x)
    return rez

def diferentaSimetrica(A,B):
    rez = set()
    for x in A:
        if x not in B:
            rez.add(x)
    for x in B:
        if x not in A:
            rez.add(x)
    return rez

def dijuncte(A,B):
    rez = True
    for x in A:
        if x in B:
            rez = False
    return rez

def stergere(B, elementeDeSters):
    return diferenta(B, elementeDeSters)

def produsCartezian(A,B):
    rez = set()
    for x in A:
        for y in B:
            rez.add( (x,y) )
    return rez

