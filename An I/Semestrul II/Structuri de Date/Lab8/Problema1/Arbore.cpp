#include <iostream>
#include "Arbore.h"
using namespace std;

static char car = 0;

static void eroare()
{
	printf("Sirul de intrare este eronat!\n");
	printf("Apasati tasta o tasta...");
	getchar();
	exit(1);
}

static char readchar()
{
	char c;
	do  c = getchar();  while (c == ' ');
	return c;
}

static char citesteNume()
{
	char c;
	if (!isalpha(car)) eroare();
	c = car;
	car = readchar();
	return c;
}

static Nod* citesteArbore()
{
	Nod* rad;
	if (car == '-')
	{
		rad = 0;
		car = readchar();
	}
	else
	{
		rad = new Nod;
		rad->data = citesteNume();
		if (car != '(')
		{
			rad->st = 0;
			rad->dr = 0;
		}
		else
		{
			car = readchar();
			rad->st = citesteArbore();
			if (car != ',')
			{
				rad->dr = 0;
			}
			else
			{
				car = readchar();
				rad->dr = citesteArbore();
			}
			if (car != ')')  eroare();
			car = readchar();
		}
	}
	return rad;
}

Nod* creareArbore()
{
	printf("Exemplu: A(B(-,C),D(E(F,-),G(H,-)))\n");
	printf("Introduceti arborele:");
	car = readchar();
	return citesteArbore();
}

// a)
void inOrdine(Nod *radacina){
    if(radacina != 0){
        inOrdine(radacina->st);
        cout << radacina->data << ' ';
        inOrdine(radacina->dr);
    }
}

// b)
void postOrdine(Nod *radacina){
    if(radacina != 0){
        postOrdine(radacina->st);
        postOrdine(radacina->dr);
        cout << radacina->data << ' ';
    }
}
