U = ['t1', 't2', 'p', 'd1', 'd2p']
nrLaturi = [0, 2, 4, 2, 4]

def P(x):
    return nrLaturi[x] >= 2

def Q(x):
    return 't' in U[x]

def R(x):
    return 'd' in U[x]

def S(x):
    return 'p' in U[x]

def Pct_a():
    exista = False
    for i in range(0, len(U)):
        print(i)
        exista = exista or (Q(i) and P(i))
    return exista

def Pct_b():
    oricare = True
    for i in range(0, len(U)):
        oricare = oricare and not(P(i) and not R(i))
    return oricare

def Pct_c():
    exista = False
    for i in range(0, len(U)):
        exista = exista or (R(i) and S(i))
    return exista

def Pct_d():
    oricare = True
    for i in range(0, len(U)):
        oricare = oricare and not(S(i) and not P(i))
    return oricare