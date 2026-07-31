from oplogic import *

def main():
    print('i)') 
    print("%10s %10s %10s %10s %10s"% ('p', 'q', 'expr1', 'expr2', 'expr3'))
    tautologie = True
    for p in (False, True):
        for q in (False, True):
            expr1 = not p or q
            expr2 = p and not q
            expr3 =  expr1 or expr2
            if expr3 == False:
                tautologie = False
            print("%10d %10d %10d %10d %10d" % (p, q, expr1, expr2, expr3))
    
    print("%10s %d" % ("Tautologie = ", tautologie))

    print()
    print('ii)') 
    print("%10s %10s %10s %10s %10s"% ('p', 'q', 'expr1', 'expr2', 'expr3'))
    tautologie = True
    for p in (False, True):
        for q in (False, True):
            expr1 = p and not q
            expr2 = not p or q
            expr3 =  not (expr1 and expr2)
            if expr3 == False:
                tautologie = False
            print("%10d %10d %10d %10d %10d" % (p, q, expr1, expr2, expr3))
    
    print("%10s %d" % ("Tautologie = ", tautologie))

    print()
    print('iii)') 
    print("%10s %10s %10s %10s %10s %10s"% ('p', 'q', 'r', 'expr1', 'expr2', 'expr3'))
    tautologie = True
    for p in (False, True):
        for q in (False, True):
            for r in (False, True):
                expr1 = p and ( q or r )
                expr2 = (p and q) or (p and r)
                expr3 =  biconditie(expr1, expr2)
                if expr3 == False:
                    tautologie = False
                print("%10d %10d %10d %10d %10d %10d" % (p, q, r, expr1, expr2, expr3))
    
    print("%10s %d" % ("Tautologie = ", tautologie))

    print()
    print('iv)') 
    print("%10s %10s %10s %10s %10s %10s"% ('p', 'q', 'r', 'expr1', 'expr2', 'expr3'))
    tautologie = True
    for p in (False, True):
        for q in (False, True):
            for r in (False, True):
                expr1 = (p or q) and (not p or r)
                expr2 = (q or r)
                expr3 = implicatie(expr1, expr2)
                if expr3 == False:
                    tautologie = False
                print("%10d %10d %10d %10d %10d %10d" % (p, q, r, expr1, expr2, expr3))
    
    print("%10s %d" % ("Tautologie = ", tautologie))

    print('v)') 
    print("%10s %10s %10s %10s %10s"% ('p', 'q', 'expr1', 'expr2', 'expr3'))
    tautologie = True
    for p in (False, True):
        for q in (False, True):
            expr1 = p and implicatie(p, q)
            expr2 = p 
            expr3 = implicatie(expr1, expr2)
            if expr3 == False:
                tautologie = False
            print("%10d %10d %10d %10d %10d" % (p, q, expr1, expr2, expr3))
    
    print("%10s %d" % ("Tautologie = ", tautologie))
    



if __name__ == '__main__':
    main()