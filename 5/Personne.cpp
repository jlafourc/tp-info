#include "Personne.h"


using namespace std;

Personne::Personne(string& nom, string& prenom){
	this->nom = nom;
	this->prenom = prenom;
}

Personne::Personne(Personne& p){

	this->nom = p.nom;
	this->prenom = p.prenom;

}

Personne::~Personne() {
	cout << "Destruction Personne" << endl;
}

void Personne::setNom(string& nom){
	this->nom = nom;
}

string Personne::getNom(){
	return nom;
}

void Personne::setPrenom(string& prenom){
	this->prenom = prenom;
}

string Personne::getPrenom(){
	return prenom;
}
