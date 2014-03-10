#ifndef COULEUR_H 
#define COULEUR_H 

#include<iostream>
using namespace std;

class Couleur { 
	string sCouleur;
	public : 
		Couleur();
		Couleur(string);
		string getCouleur() const ;
		void setCouleur (const string &s);
		Couleur& operator=(const string&);
		bool operator==(const Couleur&);
		bool operator!=(const Couleur&);
		friend ostream& operator<<(ostream&, Couleur&);

}; 
#endif