from functii import *
import matplotlib.pyplot as plt

def main():
    A = {1,2,3,4,5,6}
    R = determinareRelatie(A)

    # a)
    print("a) R = ", R, '\n')
    
    # b)
    M = reprezentareMatriceala(R, len(A))
    print("M = \n", M)

    # c)
    G = createGraf(A, R)
    desenareGraf(G)
    plt.show()

if __name__ == '__main__':
    main()
