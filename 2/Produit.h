#include <string>
#include <iostream>

#ifndef PRODUIT_H
#define PRODUIT_H

using namespace std;


class Produit {

	int id;
	string nom;

	public:
		
		/* Constructeur et destructeur */
		
		Produit();
		~Produit();

		/* Accesseurs */

		int getId();
		void setId(int);

		string getNom();
		void setNom(string);

		Produit& operator=(Produit&);
		friend ostream& operator<<(ostream&, Produit&);


};


#endif
