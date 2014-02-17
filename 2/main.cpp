#include "Produit.h"
#include "Stock.h"

#include <cstdlib>
#include <iostream>
#include <sstream>

const int TAILLE = 25;

int main() {

	Produit p1;

	p1.setId(1);
	p1.setNom("Produit 1");

	cout << p1;

	Produit p2;
	p2 = p1;

	cout << p2;


	Produit tableauStatique[TAILLE];

	for (int i = 0; i < TAILLE; i++) {

		tableauStatique[i].setId(i);
		
		tableauStatique[i].setNom("Produit");

	}


	for (int i = 0; i < TAILLE; i++) {

		cout << tableauStatique[i];
		
	}

	Produit* tableauDynamique = new Produit[TAILLE]; 

	for (int i = 0; i < TAILLE; i++) {

		tableauDynamique[i].setId(i);
		
		
		tableauDynamique[i].setNom("Produit");

	}


	for (int i = 0; i < TAILLE; i++) {

		cout << tableauDynamique[i];
		
	}

	Stock s;
	s.remplir();

	Produit p3, p4, p5;
	
	printf("%d\n", s.getQuantite());

	p3 << s;
	printf("%d\n", s.getQuantite());

	p4 << s;
	printf("%d\n", s.getQuantite());

	s << p3 << p4;
	printf("%d\n", s.getQuantite());

	s << (p5 << s);
	printf("%d\n", s.getQuantite());
	
	return EXIT_SUCCESS;

}