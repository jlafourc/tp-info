#include "Enseignant.h"

#include <iostream>
#include <cstring>


using namespace std;


Enseignant::Enseignant(string& nom, string& prenom, string& metier) : Personne(nom,prenom){
	this->metier = metier;
}

Enseignant::Enseignant(Enseignant& e) : Personne(e){
	this->metier = e.metier;
}

Enseignant::~Enseignant() {
	cout << "Destruction Enseignant" << endl;
}

void Enseignant::setMetier(string& metier){
	this->metier = metier;
}

string Enseignant::getMetier(){
	return metier;
}

void Enseignant::affiche(){
	Personne::affiche();
	cout << "[Enseignant] - Métier : " << metier << endl;
}
