from oplogic import *

def main():
    print('i) ')
    print("%10s %10s %10s %10s %10s %10s"% ('p', 'q', 'r', 'expr1', 'expr2', 'expr3'))
    for p in (False, True):
        for q in (False, True):
            for r in (False, True):
                expr1 = biconditie(q, implicatie(r, not p))
                expr2 = biconditie(implicatie(not q, p), r)
                expr3 = expr1 and expr3
                print("%10d %10d %10d %10d %10d %10d" % (p, q, r, expr1, expr2, expr3))

    print()
    print('ii) ')
    print("%10s %10s %10s %10s %10s %10s"% ('p', 'q', 'r', 'expr1', 'expr2', 'expr3'))
    for p in (False, True):
        for q in (False, True):
            for r in (False, True):
                expr1 = (p or q) and (not p or r)
                expr2 = q or r
                expr3 = implicatie(expr1, expr2)
                print("%10d %10d %10d %10d %10d %10d" % (p, q, r, expr1, expr2, expr3))



if __name__ == '__main__':
    main()