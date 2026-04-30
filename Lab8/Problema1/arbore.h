#pragma once

struct Nod {
	char data;
	Nod* st, *dr;
};

Nod* creareArbore();
void inOrdine(Nod *radacina);
void postOrdine(Nod *radacina);