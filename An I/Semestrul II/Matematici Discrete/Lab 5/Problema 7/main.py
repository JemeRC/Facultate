def implicatie(x, y):
    if x:
        return y
    else:
        return True
    
def main():

    print('a) ')
    tautologie = True
    print("%10s %10s %10s %10s %10s %10s %10s" % ('a', 'b', 'c', 'expr1', 'expr2', 'concluzie', 'expresie'))
    for a in (False, True):
        for b in (False, True):
            for c in (False, True):
                expr1 = implicatie(a, (b and c))
                expr2 = not b
                concluzie = not a
                expresie = implicatie(expr1 and expr2, concluzie)
                tautologie = tautologie and expresie
                print("%10d %10d %10d %10d %10d %10d %10d" % (a, b, c, expr1, expr2, concluzie, expresie))
    print("Tautologie: ", tautologie)

    print('b) ')
    tautologie = True
    print("%10s %10s %10s %10s %10s %10s %10s %10s %10s %10s" % ('p', 'q', 'r', 's', 'expr1', 'expr2', 'expr3', 'expr4', 'concluzie', 'expresie'))
    for p in (False, True):
        for q in (False, True):
            for r in (False, True):
                for s in (False, True):
                    expr1 = implicatie(s, r)
                    expr2 = implicatie((p or q), not r)
                    expr3 = implicatie(not s, implicatie(not q, r))
                    expr4 = p
                    concluzie = q
                    expresie = implicatie(expr1 and expr2 and expr3 and expr4, concluzie)
                    tautologie = tautologie and expresie
                    print("%10d %10d %10d %10d %10d %10d %10d %10d %10d %10d" % (p, q, r, s, expr1, expr2, expr3, expr4, concluzie, expresie))
    print("Tautologie: ", tautologie)


if __name__ == '__main__':
    main()