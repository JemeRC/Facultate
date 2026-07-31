def elementeMinime(graf):
    minime = []
    for nod in graf:
        minimal = True
        for ver_nod in graf:
            if nod in graf[ver_nod]:
                minimal = False
        if minimal:
            minime.append(nod)
    return minime

def elementeMaxime(graf):
    maxime = []
    for nod in graf:
        lista_nod = graf[nod]
        if len(lista_nod) == 0:
            maxime.append(nod)
    return maxime

def elementeleDiagramei(graf):
    minime = elementeMinime(graf)
    maxime = elementeMaxime(graf)

    print('Elementele minime: ', minime)
    print('Elementele maxime: ', maxime)
    if len(minime) == 1:
        print('Elementul minim: ', minime[0])
    if len(maxime) == 1:
        print('Elemntul maxim: ', maxime[0])


