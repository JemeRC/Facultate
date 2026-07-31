def poz(x):
    return x > 0

def neg(x):
    return x < 0

def Pct_a():
    x = -1
    y = -2
    return poz(x * y)

def Pct_b():
    x = 1
    y = 4
    return poz( (x + y) / 2 )

def Pct_c():
    exista = False
    for x in range(-10, 0):
        for y in range(-10, 0):
            exista = exista or not neg(x - y)
    return exista

def Pct_d():
    oricare = True
    for x in range(1, 11):
        for y in range(1, 11):
            oricare = oricare and not( abs(x+y) > (abs(x) + abs(y)))
    return oricare