from functools import reduce

def main():
    x = []
    y = []

    n = int(input('n = '))
    for i in range(0,n):
        print('x[%d] = ' % (i), end='')
        x.append(float(input('')))
    for i in range(0,n):
        print('y[%d] = ' % (i), end='')
        y.append(float(input('')))
    
    s = list(map(lambda x,y: x+y, x, y))
    print('Vectorul suma: ',s)

    p = reduce(lambda x,y: x+y, list(map(lambda x,y: x*y, x, y)))
    print('Produsul scalar: ',p)




if __name__ == '__main__':
    main()

