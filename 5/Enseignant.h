#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include "Personne.h"
#include <string>

using namespace std;


class Enseignant : public Personne {

	string metier;

public:

	Enseignant(string& nom, string& prenom, string& metier);
	Enseignant(Enseignant& e);
	~Enseignant();
	void setMetier(string& metier);
	string getMetier();

	void affiche();

};

#endif