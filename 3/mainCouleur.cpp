#include "EnsembleCouleur.h"
#include "Couleur.h"
#include <cstdlib>
#include <iostream>


using namespace std;

int main() {
	EnsembleCouleur e;
	for (int i = 1; i <= 50; i++) {
		Couleur c("Couleur" + to_string(i));
		e.inserer(c);
	}

	cout << e.card() << endl;

	e.affiche();
	e.affiche(25);

	for (int i = 30; i <= 39; i++) {
		Couleur c = "Couleur" + to_string(i);
		e.retirer(c);
	}

	e.affiche();
	cout << e.card() << endl;


	return EXIT_SUCCESS;

}