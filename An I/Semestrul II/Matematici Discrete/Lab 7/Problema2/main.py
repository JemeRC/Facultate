from functii import *

def main():
    A = {'a','b','c'}
    B = {'a','b','d','e'}

    U = reuniune(A,B)
    I = intersectie(A,B)
    DA = diferenta(A,B)
    DB = diferenta(B,A)
    DS = diferentaSimetrica(A,B)

    print('a)')
    print("%3s %8s %8s %8s %8s %8s"%('var','A U B','A ^ B', 'A \\ B','B \\ A','A /\\ B'))
    for x in ('a','b','c','d','e'):
          print("%3c %8d %8d %8d %8d %8d"%(x, x in U, x in I, x in DA, x in DB, x in DS))

    print()
    print('b)')

    U = {x for x in range(1,11)}
    A = {1, 3, 4, 6, 10}
    B = {2, 4, 5, 7}
    C = {2, 4, 6, 8, 10}

    i = reuniune(A, B)
    ii = intersectie(A, C)
    iii = reuniune(intersectie(A, B), C)
    iv = diferenta(negat(A, U), C)
    v = diferenta(diferentaSimetrica(A, C), B)

    print("%8s %8s %8s %8s %8s %8s"%('var','i','ii', 'iii', 'iv','v'))
    for x in U:
          print("%8d %8d %8d %8d %8d %8d"%(x, x in i, x in ii, x in iii, x in iv, x in v))

    

if __name__ == '__main__':
    main()
