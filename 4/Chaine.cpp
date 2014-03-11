#include "Chaine.h"
#include <cstring>

Chaine::Chaine(Chaine& c) {
	longueur = c.longueur;
	capacite = c.capacite;
	tab = new char[capacite];
	strcpy(tab, c.tab);
}

Chaine::Chaine(char* c) {
	longueur = strlen(c);
	int nbBlocs  = longueur / TAILLE_BLOC + 1;
	capacite = nbBlocs * TAILLE_BLOC;
	tab = new char[capacite];
	strcpy(tab, c);

}

Chaine::~Chaine() {
	delete [] tab;
}

int Chaine::getLongueur() {
	return longueur;
}

int Chaine::getCapacite() {
	return capacite;
}

Chaine& Chaine::operator=(Chaine& c) {
	delete [] tab;
	longueur = c.longueur;
	capacite = c.capacite;
	tab = new char[capacite];
	strcpy(tab, c.tab);
	return *this;
}

Chaine& Chaine::operator=(char* c) {
	longueur = strlen(c);
	
	if (longueur > capacite) {
		int nbBlocs  = longueur / TAILLE_BLOC + 1;
		capacite = nbBlocs * TAILLE_BLOC;
		delete [] tab;
		tab = new char[capacite];
	}

	strcpy(tab, c);

	return *this;
}



ostream& operator<<(ostream& os, Chaine& c) {
	os << c.tab;
	return os;
}