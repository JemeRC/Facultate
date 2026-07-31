def determinareRelatie(mult_uno, mult_dos, conditie):
    R = list()
    for a in mult_uno:
        for b in mult_dos:
            if( conditie(a,b) ):
                R.append( (a,b) )
    return R


def pcta(a, b):
    return a == b
def pctb(a, b):
    return a + b == 4
def pctc(a, b):
    return a > b
def pctd(a, b):
    return b % a == 0

def cmmdc(a, b):
    while(b):
        r = a % b
        a = b
        b = r
    return a

def pcte(a, b):
    return cmmdc(a, b) == 1
def pctf(a, b):
    return cmmdc(a, b) == 2


