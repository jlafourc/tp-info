#include "Stock.h"


Stock::Stock() {
	quantite = 0;
}

/* Accesseurs */

int Stock::getQuantite() {
	return quantite;
}

void Stock::remplir() {
	for (int i = quantite; i < TAILLE_RAYON; i++) {
		rayon[i].setId(i);
		rayon[i].setNom("Produit");
	}
	quantite = TAILLE_RAYON;
}

Stock& Stock::operator<<(Produit& p) {
	if (quantite < TAILLE_RAYON) {
		rayon[quantite] = p;
		quantite++;
	} else {
		cout << "Le rayon est plein" << endl;
	}
	return *this;
}

Produit& operator<<(Produit& p, Stock& s) {
	p = s.rayon[--s.quantite];
	return p;
}
