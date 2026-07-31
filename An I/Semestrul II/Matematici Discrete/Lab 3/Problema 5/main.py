from oplogic import *

def main():
    print("%10s %10s %10s %10s %10s %10s %10s %10s %10s %10s"% ('A', 'B', 'C', 'D', 'E', 'expr1', 'expr2', 'expr3', 'expr4', 'expr5'))
    for A in (False, True):
        for B in (False, True):
            for C in (False, True):
                for D in (False, True):
                    for E in (False, True): 
                        expr1 = implicatie(A, B)
                        expr2 = D or E
                        expr3 = xor(B, C)
                        expr4 = biconditie(D, C)
                        expr5 = implicatie(E, A and D)
                        if( expr1 and expr2 and expr3 and expr4 and expr5)== True:
                            print("***%7d %10d %10d %10d %10d %10d %10d %10d %10d %10d" % (A, B, C, D, E, expr1, expr2, expr3, expr4, expr5))
                            ATemp = A
                            BTemp = B
                            CTemp = C
                            DTemp = D
                            ETemp = E
                        else:
                            print("%10d %10d %10d %10d %10d %10d %10d %10d %10d %10d" % (A, B, C, D, E, expr1, expr2, expr3, expr4, expr5))
                
    print()
    print('***')
    print("%10s %d" % ("val(A) = ", ATemp))
    print("%10s %d" % ("val(B) = ", BTemp))
    print("%10s %d" % ("val(C) = ", CTemp))
    print("%10s %d" % ("val(D) = ", DTemp))
    print("%10s %d" % ("val(E) = ", ETemp))




if __name__ == '__main__':
    main()