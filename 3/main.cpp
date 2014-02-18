#include "Ensemble.h"

#include <cstdlib>
#include <iostream>


using namespace std;

int main() {
	Ensemble e;
	for (int i = 1; i <= 50; i++) {
		e.inserer(i);
	}

	cout << e.card() << endl;

	e.affiche();
	e.affiche(25);

	for (int i = 30; i <= 39; i++) {
		e.retirer(i);
	}

	e.affiche();
	cout << e.card() << endl;


	return EXIT_SUCCESS;

}