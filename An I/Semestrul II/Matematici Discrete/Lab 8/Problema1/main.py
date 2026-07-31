def f(x):
    return 2*x


def main():
    x = list(range(-10,11))
    y = list(range(-10,11))
    z = list(range(-10,11))

    print('f(x) = ',list(map(f, x)))
    print('g(x,y,z) = ', list(map(lambda t,u,v: t*t + 3 * u + 5 * v, x,y,z)))

if __name__ == '__main__':
    main()

