from oplogic import *

def main():
    print('i) ')
    print("%10s %10s %10s %10s"% ('p', 'q', 'expr1', 'expr2'))
    for p in (False, True):
        for q in (False, True):
            expr1 = implicatie(p, (p and q))
            expr2 = (p or q) and not( p and q) 
            if( expr1 and expr2 )== True:
                print("***%7d %10d %10d %10d" % (p, q, expr1, expr2))
                pTemp = p
                qTemp = q
            else:
                print("%10d %10d %10d %10d" % (p, q, expr1, expr2))
    
    print()
    print('***')
    print("%10s %d" % ("val(p) = ", pTemp))
    print("%10s %d" % ("val(q) = ", qTemp))

    print()
    print('ii) ')
    print("%10s %10s %10s %10s"% ('p', 'q', 'expr1', 'expr2'))
    for p in (False, True):
        for q in (False, True):
            expr1 = implicatie(p, q)
            expr2 = implicatie((not p or q), p) 
            if( expr1 and expr2 )== True:
                print("***%7d %10d %10d %10d" % (p, q, expr1, expr2))
                pTemp = p
                qTemp = q
            else:
                print("%10d %10d %10d %10d" % (p, q, expr1, expr2))
    
    print()
    print('***')
    print("%10s %d" % ("val(p) = ", pTemp))
    print("%10s %d" % ("val(q) = ", qTemp))


if __name__ == '__main__':
    main()