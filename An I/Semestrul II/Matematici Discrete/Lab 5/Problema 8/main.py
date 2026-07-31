def implicatie(x, y):
    if x:
        return y
    else:
        return True
    
def main():

    print('a)')
    contradictie = False
    print('%10s %10s %10s %10s %10s %10s %10s %10s %10s ' % ('p', 'q', 'r', 's', 'expr1', 'expr2', 'expr3', 'concluzie', 'expresie'))
    for p in (False, True):
        for q in (False, True):
            for r in (False, True):
                for s in (False, True):
                    expr1 = implicatie(p, q)
                    expr2 = implicatie(s, r)
                    expr3 = p or q
                    concluzie = q or r
                    expresie = (expr1 and expr2 and expr3) and not concluzie
                    contradictie = contradictie or expresie
                    print('%10d %10d %10d %10d %10d %10d %10d %10d %10d' % (p, q, r, s, expr1, expr2, expr3, concluzie, expresie))
    if(not contradictie):
        print('(RAA) este o contradictie')

    print()
    print('b)')
    contradictie = False
    print('%10s %10s %10s %10s %10s %10s %10s %10s' % ('p', 'q', 'r', 's', 'expr1', 'expr2', 'concluzie', 'expresie'))
    for p in (False, True):
        for q in (False, True):
            for r in (False, True):
                for s in (False, True):
                    expr1 = implicatie(p, implicatie(q, r))
                    expr2 = not s or p
                    concluzie = implicatie(q, implicatie(s, r))
                    expresie = (expr1 and expr2) and not concluzie
                    contradictie = contradictie or expresie
                    print('%10d %10d %10d %10d %10d %10d %10d %10d' % (p, q, r, s, expr1, expr2, concluzie, expresie))
    if(not contradictie):
        print('(RAA) este o contradictie')
        
if __name__ == '__main__':
    main()