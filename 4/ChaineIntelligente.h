#ifndef ChaineIntelligente_INTELLIGENTE_H
#define ChaineIntelligente_INTELLIGENTE_H

#include <iostream>

using namespace std;


class ChaineIntelligente {

	char* tab;
	int* count;
	int* capacite;
	int* longueur;

public:

	static const int TAILLE_BLOC = 10;


	ChaineIntelligente();
	ChaineIntelligente(ChaineIntelligente&);
	ChaineIntelligente(char*);
	~ChaineIntelligente();

	int getLongueur();
	int getCapacite();

	ChaineIntelligente& operator=(ChaineIntelligente&);
	ChaineIntelligente& operator=(char*);
	friend ostream& operator<<(ostream&, ChaineIntelligente&);

private:

	void setLongueur(int);
	void setCapacite(int);


};



#endif