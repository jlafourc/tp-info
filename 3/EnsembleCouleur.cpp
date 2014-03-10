#include "EnsembleCouleur.h"
#include <algorithm>
#include <iostream>

using namespace std;


EnsembleCouleur::EnsembleCouleur() {
	cardinalite = 0;
	taille = TAILLE_INITIALE;
	elements = new element[taille];
}

EnsembleCouleur::~EnsembleCouleur() {
	delete [] elements;
}

bool EnsembleCouleur::appartient(element& e) {
	for (int i = 0; i < cardinalite; i++) {
		if (elements[i] != e) {
			// Pas trouvé !
		} else {
			return true;
		}
	}
	return false;
}

int EnsembleCouleur::card() {
	return cardinalite;
}

void EnsembleCouleur::inserer(element& e) {
	int position = cardinalite;
	if (cardinalite == taille) {
		int ancienne_taille = taille;
		taille = taille + TAILLE_REALLOC;
		element* new_elements = new element[taille];
		copy(elements, elements + ancienne_taille, new_elements);
		delete [] elements;
		elements = new_elements;
	}
	elements[position] = e;
	cardinalite++;
}

void EnsembleCouleur::affiche() {
	for (int i = 0; i < cardinalite; i++) {
		cout << elements[i] << " ";
	}
	cout << endl;
}


void EnsembleCouleur::affiche(int rang) {
	if (rang < cardinalite) {
		cout << elements[rang] << endl;
	}
}

void EnsembleCouleur::retirer(const element e) {
	bool decaler = false;
	for (int i = 0; i < cardinalite; i++) {
		if (decaler) {
			elements[i-1] = elements[i];
		} else if (elements[i] == e) {
			decaler = true; 	
		}
	}

	if (decaler) {
		cardinalite--;
	}

	if ((cardinalite + TAILLE_REALLOC) == taille) {
		element* new_elements = new element[cardinalite];
		copy(elements, elements + cardinalite, new_elements);
		delete [] elements;
		elements = new_elements;
	}

}