def calculProdusCifre(n : int):
    if n > 9:
        return (n % 10) * calculProdusCifre(int(n/10))
    else:
        return n
    
def Persistenta(n : int):
    if n > 9:
        print(n)
        return 1 + Persistenta(calculProdusCifre(n))
    else:
        return -1
    
def main():
    n = 2379
    print(Persistenta(n))

if __name__ == '__main__':
    main()