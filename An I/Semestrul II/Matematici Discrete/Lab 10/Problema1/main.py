from functii import *

def main():
    A = {1,2,3,4}
    B = {0,1,2,3}
    
    # a)
    R = determinareRelatie(A,B,pcta);
    print('a) R = ', R,'\n');

    # b)
    R = determinareRelatie(A,B,pctb);
    print('b) R = ', R,'\n');

    # c)
    R = determinareRelatie(A,B,pctc);
    print('c) R = ', R,'\n');

    # d)
    R = determinareRelatie(A,B,pctd);
    print('d) R = ', R,'\n');

    # e)
    R = determinareRelatie(A,B,pcte);
    print('e) R = ', R,'\n');
    
    # f)
    R = determinareRelatie(A,B,pctf);
    print('f) R = ', R,'\n');
 

if __name__ == '__main__':
    main()
