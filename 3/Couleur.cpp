#include "Couleur.h"

Couleur::Couleur() {

}

Couleur::Couleur(string c) {
	sCouleur = c;
}

string Couleur::getCouleur() const {
	return sCouleur;
}

void Couleur::setCouleur (const string& s) {
	sCouleur = s;
}

Couleur& Couleur::operator=(const string& s) {
	sCouleur = s;
	return *this;
}

bool Couleur::operator==(const Couleur& c) {
	return sCouleur == c.sCouleur;
}

bool Couleur::operator!=(const Couleur& c) {
	return sCouleur != c.sCouleur;
}


ostream& operator<<(ostream& os, Couleur& c) {
	os << c.sCouleur;
	return os;
}
