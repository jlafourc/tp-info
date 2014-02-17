#include "Produit.h"


Produit::Produit() {
	#ifdef DEBUG
		cout << "Construction de l'objet" << endl;
	#endif
}

Produit::~Produit() {
	#ifdef DEBUG
		cout << "Destruction de l'objet" << endl;
	#endif
}

int Produit::getId() {
	return id;
}

void Produit::setId(int _id) {
	id = _id;
}


string Produit::getNom() {
	return nom;
}


void Produit::setNom(string _nom) {
	nom = _nom;
}


Produit& Produit::operator=(Produit& produit) {
	id = produit.id;
	nom = produit.nom;

	return *this;
}

ostream& operator<<(ostream& os, Produit& p) {
	return os << "Produit : " << "id -> " << p.id << " -- nom -> " << p.nom << endl;
}