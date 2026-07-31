from functii import *

def main():
    graf_a = {
            'a' : ['d'],
            'b' : ['e'],
            'c' : ['f'],
            'd' : ['i', 'h'],
            'e' : ['h'],
            'f' : ['g'],
            'i' : ['j'],
            'h' : ['j', 'h'],
            'g' : ['k'],
            'j' : ['l'],
            'k' : ['l', 'm'],
            'l' : [],
            'm' : []
    }

    graf_b = {
            'a' : ['b', 'c'],
            'b' : ['d', 'e'],
            'c' : ['e'],
            'd' : ['f'],
            'e' : ['f'],
            'f' : ['g'],
            'g' : []
    }

    graf_c = {
            'a' : ['b', 'c'],
            'b' : ['d', 'g'],
            'c' : ['e'],
            'd' : ['f'],
            'e' : ['f','g'],
            'f' : ['h'],
            'g' : ['h'],
            'h' : []
    }

    graf_d = {
            'a' : ['b', 'c'],
            'b' : ['d', 'g'],
            'c' : ['e'],
            'd' : ['f'],
            'e' : ['g'],
            'f' : ['h'],
            'g' : ['h'],
            'h' : ['i'],
            'i' : []
    }
    
    print('a)')
    elementeleDiagramei(graf_a)
    
    print('\nb)')
    elementeleDiagramei(graf_b)
    
    print('\nc)')
    elementeleDiagramei(graf_c)
    
    print('\nd)')
    elementeleDiagramei(graf_d)

if __name__ == '__main__':
    main()


