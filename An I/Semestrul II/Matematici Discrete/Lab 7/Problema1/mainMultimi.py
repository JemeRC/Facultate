from functiiMultimi import *

def main():
    A = set(input("A = "))
    B = set(input("B = "))

    print("Reuniunea A U B = ", reuniune(A,B))
    print("Diferenta A \\ B = ", diferenta(A,B))
    print("Diferenta Simetrica A /\\ B = ", diferentaSimetrica(A,B))
    print("Dijuncte A si B = ", dijuncte(A,B))
    B = stergere(B, [2, 4] );
    print("Stergere B cu [2,4], B = ", B)
    print("Produs Cartezian A x B = ", produsCartezian(A,B))

if __name__ == '__main__':
    main()
