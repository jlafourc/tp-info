#include <string>
#include <iostream>

#include "Produit.h"

#ifndef STOCK_H
#define STOCK_H

using namespace std;



class Stock {
	
	static const int TAILLE_RAYON = 25;

	int quantite;
	Produit rayon[TAILLE_RAYON];

	public:
		
		/* Constructeur et destructeur */
		
		Stock();

		/* Accesseurs */

		int getQuantite();
		void remplir();

		Stock& operator<<(Produit&);
		friend Produit& operator<<(Produit&, Stock&);

};


#endif