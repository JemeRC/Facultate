def implicatie(p, q):
    if p:
        return q
    else:
        return True
    
def xor(p, q):
    if p == q:
        return False
    else:
        return True

def biconditie(p, q):
    if p == q:
        return True
    else:
        return False
    
