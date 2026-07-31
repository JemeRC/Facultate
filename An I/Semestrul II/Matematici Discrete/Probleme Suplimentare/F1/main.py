from functools import reduce

def citirePreturi():
    preturi = list()
    for i in range(0,6):
        print('Pret Item %1d = ' % (i+1), end = '')
        preturi.append(float(input()))
    return preturi

def main():
    # a)
    preturi = citirePreturi()
    
    # b)
    preturiPeste = list(filter(lambda x: x > 100, preturi))

    # c)
    preturiReduse = list(map(lambda x: x * 0.9, preturiPeste))

    # d)
    sumaReduse = reduce(lambda x,y: x + y, preturiReduse)

    # e)
    print(preturi)
    print(preturiPeste)
    print(preturiReduse)
    print(sumaReduse)
    
if __name__ == '__main__':
    main()

