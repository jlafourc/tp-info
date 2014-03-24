#include "Personne.h"
#include "Etudiant.h"
#include "Enseignant.h"
#include <cstdlib>
#include <iostream>


using namespace std;

int main() {

	string nom = "n";
	string prenom = "p";
	string metier = "Master of Puppets";


	Etudiant etud(nom, prenom, 1);
	Enseignant ens(nom, prenom, metier);


	etud.affiche();
	ens.affiche();


	Personne* tab[10];
	for (int i = 0; i < 10; i++) {
		if(i % 2) {
			tab[i] = new Etudiant(nom, prenom, i);
		} else {
			tab[i] = new Enseignant(nom, prenom, metier);
		}
	}

	for (int i = 0; i < 10; i++) {
		tab[i]->affiche();
	}


	for (int i = 0; i < 10; i++) {
		delete tab[i];
	}

	return EXIT_SUCCESS;

}