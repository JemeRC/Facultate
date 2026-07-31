import numpy as np
import networkx as nx
import matplotlib.pyplot as plt


def desenareGraf(G):
    # Folosește așezarea circulară implicită și pune numele nodurilor
    nx.draw_circular(G, with_labels=True)
    plt.show()

def createGraf(V:list, E:list):
    G = nx.DiGraph()
    G.add_nodes_from(V)
    G.add_edges_from(E)
    return G



def determinareRelatie(multime):
    R = list()
    for a in multime:
        for b in multime:
            if( b % a == 0 ):
                R.append( (a,b) )
    return R

def reprezentareMatriceala(relatie, n):
    M = np.zeros((n,n))
    M = M.astype(int)
    for elem in relatie:
        a = elem[0]
        b = elem[1]
        M[a-1][b-1] = 1
    return M
