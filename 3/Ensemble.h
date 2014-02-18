#ifndef ENSEMBLE_H
#define ENSEMBLE_H

#define element int


class Ensemble {

	static const int TAILLE_INITIALE = 20;
	static const int TAILLE_REALLOC = 10;

	int cardinalite;
	int taille;
	element* elements;

public:

	Ensemble();
	~Ensemble();

	bool appartient(element&);
	int card();
	void inserer(element&);
	
	void affiche();
	void affiche(int);

	void retirer(const element);

};






#endif