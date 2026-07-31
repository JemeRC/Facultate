from numpy import sqrt

def main():
    x = tuple([3.14159, -23.2381, -123.123, 24, -96, 36, 64, -23, -74, -121, 34])
    
    pozitive = tuple(filter(lambda t: t > 0, x))

    print('Radacinele patrate din valorile pozitive: ', tuple(map(lambda t: sqrt(t), pozitive)))


if __name__ == '__main__':
    main()
