from oplogic import *

def main():
    print("%10s %10s %10s %10s %10s %10s"% ('B', 'S', 'F', 'expr1', 'expr2', 'expr3'))
    for B in (False, True):
        for S in (False, True):
            for F in (False, True):
                expr1 = S and not F
                expr2 = implicatie(B, F)
                expr3 = not F and (B or S) 
                if( expr1 and expr2 and expr3)== True:
                    print("***%7d %10d %10d %10d %10d %10d" % (B, S, F, expr1, expr2, expr3))
                    BTemp = B
                    STemp = S
                    FTemp = F
                else:
                    print("%10d %10d %10d %10d %10d %10d" % (B, S, F, expr1, expr2, expr3))
        
    print()
    print('***')
    print("%10s %d" % ("val(B) = ", BTemp))
    print("%10s %d" % ("val(S) = ", STemp))
    print("%10s %d" % ("val(F) = ", FTemp))



if __name__ == '__main__':
    main()