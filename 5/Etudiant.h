#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "Personne.h"
#include <string>

using namespace std;


class Etudiant : public Personne {

	int numero;

public:

	Etudiant(string& nom, string& prenom, int numero);
	Etudiant(Etudiant& e);
	~Etudiant();
	
	void setNumero(int numero);
	int getNumero();

	void affiche();

};

#endif