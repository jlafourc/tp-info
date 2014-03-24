#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <iostream>
#include <cstring>

using namespace std;

class Personne {

	string nom;
	string prenom;

public:

	Personne(string& nom, string& prenom);
	Personne(Personne& p);

	virtual ~Personne();

	void setNom(string& nom);
	string getNom();

	void setPrenom(string& prenom);
	string getPrenom();

	virtual void affiche() {
		cout << "[Personne] - Nom : "  << nom << " - Prénom : " << prenom << endl;
	}

};


#endif