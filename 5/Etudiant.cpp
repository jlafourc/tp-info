#include "Etudiant.h"

#include <iostream>
#include <cstring>


using namespace std;


Etudiant::Etudiant(string& nom, string& prenom, int numero) : Personne(nom,prenom){
	this->numero = numero;
}

Etudiant::Etudiant(Etudiant& e) : Personne(e){
	this->numero = e.numero;
}

Etudiant::~Etudiant() {
	cout << "Destruction Etudiant" << endl;
}

void Etudiant::setNumero(int numero){
	this->numero = numero;
}

int Etudiant::getNumero(){
	return numero;
}

void Etudiant::affiche(){
	Personne::affiche();
	cout << "[Etudiant] - Numéro : " << numero << endl;
}
