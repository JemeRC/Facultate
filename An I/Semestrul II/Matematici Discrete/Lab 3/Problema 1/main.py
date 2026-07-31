from oplogic import *

def main():
    print("%10s %10s %12s %10s %10s"% ('p', 'q', 'IMPLICA', 'EXCLUSIV', 'BICONDITIE'))
    for p in (False, True):
        for q in (False, True):
            expr1 = implicatie(p, q)
            expr2 = xor(p, q)
            expr3 = biconditie(p, q)
            print("%10d %10d %10d %10d %10d" % (p, q, expr1, expr2, expr3))

if __name__ == '__main__':
    main()