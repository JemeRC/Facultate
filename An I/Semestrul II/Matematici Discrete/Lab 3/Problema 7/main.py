from oplogic import *

def main():
    print('i)') 
    print("%10s %10s %10s %10s %10s %10s"% ('p', 'q', 'r', 'expr1', 'expr2', 'expr3'))
    tautologie = True
    contradictie = True
    for p in (False, True):
        for q in (False, True):
            for r in (False, True):
                expr1 = (p or q) and (not p or r)
                expr2 = (q or r)
                expr3 =  implicatie(expr1, expr2)
                if expr3 == False:
                    tautologie = False
                if expr3 == True:
                    contradictie = False
                print("%10d %10d %10d %10d %10d %10d" % (p, q, r, expr1, expr2, expr3))
    
    print("%10s %d" % ("Tautologie = ", tautologie))
    print("%10s %d" % ("Contradictie = ", contradictie))
    if not tautologie and not contradictie:
        print("Nici Tautologie, Nici Contradictie")


    print()
    print('ii)')
    print("%10s %10s %10s %10s %10s %10s"% ('p', 'q', 'r', 'expr1', 'expr2', 'expr3'))
    tautologie = True
    contradictie = True
    for p in (False, True):
        for q in (False, True):
            for r in (False, True):
                expr1 = implicatie(p, q) and implicatie(q, r)
                expr2 = implicatie(p, r)
                expr3 = implicatie(expr1, expr2)
                if expr3 == False:
                    tautologie = False
                if expr3 == True:
                    contradictie = False
                print("%10d %10d %10d %10d %10d %10d" % (p, q, r, expr1, expr2, expr3))
    
    print("%10s %d" % ("Tautologie = ", tautologie))
    print("%10s %d" % ("Contradictie = ", contradictie))
    if not tautologie and not contradictie:
        print("Nici Tautologie, Nici Contradictie")


    print()
    print('iii)') 
    print("%10s %10s %10s %10s %10s"% ('b', 'a', 'expr1', 'expr2', 'expr3'))
    tautologie = True
    contradictie = True
    for a in (False, True):
        for b in (False, True):
            expr1 = biconditie(b, implicatie(b, a))
            expr2 = a
            expr3 = implicatie(expr1, expr2)
            if expr3 == False:
                tautologie = False
            if expr3 == True:
                contradictie = False
            print("%10d %10d %10d %10d %10d" % (p, q, expr1, expr2, expr3))
    
    print("%10s %d" % ("Tautologie = ", tautologie))
    print("%10s %d" % ("Contradictie = ", contradictie))
    if not tautologie and not contradictie:
        print("Nici Tautologie, Nici Contradictie")


if __name__ == '__main__':
    main()