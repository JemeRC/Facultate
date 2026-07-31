#include <iostream>
#include "Arbore.h"

using namespace std;

int main()
{
	Nod *root = creareArbore();

	// a)
	cout << "INORDINE: "; inOrdine(root); cout << endl;

	// b)
	cout << "INORDINE: "; postOrdine(root); cout << endl;


	return 0;
}