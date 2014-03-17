#include "ChaineIntelligente.h"
#include <cstring>


ChaineIntelligente::ChaineIntelligente() {
	longueur = new int(0);
	capacite = new int(TAILLE_BLOC);
	tab = new char[*capacite];
	count = new int(1);
}

ChaineIntelligente::ChaineIntelligente(ChaineIntelligente& c) {
	longueur = c.longueur;
	capacite = c.capacite;
	tab = c.tab;
	count = c.count;
	(*count)++;
}

ChaineIntelligente::ChaineIntelligente(char* c) {
	longueur = new int(strlen(c));
	int nbBlocs  = *longueur / TAILLE_BLOC + 1;
	capacite = new int(nbBlocs * TAILLE_BLOC);
	tab = new char[*capacite];
	strcpy(tab, c);
	count = new int(1);
}

ChaineIntelligente::~ChaineIntelligente() {
	(*count)--;
	if(*count == 0) {
		delete longueur;
		delete capacite;
		delete [] tab;	
		delete count;

		cout << "RESTE 0 ==== DESTRUCTION !!!" << endl;
	} else {
		cout << "RESTE " << *count << " chaines allouées" << endl;
	}
	
}

int ChaineIntelligente::getLongueur() {
	return *longueur;
}

/** Privé **/
void ChaineIntelligente::setLongueur(int l) {
	delete longueur;
	longueur = new int(l);
}

int ChaineIntelligente::getCapacite() {
	return *capacite;
}

/** Privé **/ 
void ChaineIntelligente::setCapacite(int c) {
	delete capacite;
	capacite = new int(c);
}


ChaineIntelligente& ChaineIntelligente::operator=(ChaineIntelligente& c) {
	longueur = c.longueur;
	capacite = c.capacite;
	tab = c.tab;
	count = c.count;
	(*count)++;
	return *this;
}

ChaineIntelligente& ChaineIntelligente::operator=(char* c) {
	setLongueur(strlen(c));
	if (*longueur > *capacite) {
		int nbBlocs  = *longueur / TAILLE_BLOC + 1;
		setCapacite(nbBlocs * TAILLE_BLOC);
		delete [] tab;
		tab = new char[*capacite];
	}

	strcpy(tab, c);

	return *this;
}



ostream& operator<<(ostream& os, ChaineIntelligente& c) {
	os << c.tab;
	return os;
}