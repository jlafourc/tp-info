#ifndef CHAINE_H
#define CHAINE_H

#include <iostream>

using namespace std;


class Chaine {

	char* tab;
	int capacite;
	int longueur;

public:

	static const int TAILLE_BLOC = 10;


	Chaine();
	Chaine(Chaine&);
	Chaine(char*);
	~Chaine();

	int getLongueur();
	int getCapacite();

	Chaine& operator=(Chaine&);
	Chaine& operator=(char*);
	friend ostream& operator<<(ostream&, Chaine&);



};



#endif