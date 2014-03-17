#include "ChaineIntelligente.h"

#include <cstdlib>
#include <iostream>


using namespace std;

int main() {

	char str[10] = "test";

	ChaineIntelligente* c = new  ChaineIntelligente(str);


	cout << "ChaineIntelligente : " << *c << " - Longueur : " << c->getLongueur() << " - Capacité : " << c->getCapacite() << endl;


	char bigStr[40] = "abcdefghijklmnopqrtsuvwxyz0123456789";
	*c = bigStr;

	cout << "ChaineIntelligente : " << *c << " - Longueur : " << c->getLongueur() << " - Capacité : " << c->getCapacite() << endl;


	char notSmallStr[40] = "abcdefghijklmnopqrtsuvwxyz";
	*c = notSmallStr;

	cout << "ChaineIntelligente : " << *c << " - Longueur : " << c->getLongueur() << " - Capacité : " << c->getCapacite() << endl;


	ChaineIntelligente* c2 = new ChaineIntelligente();
	ChaineIntelligente* c3 = new ChaineIntelligente();

	*c3 = *c2 = *c; 

	delete c2;
	delete c;
	delete c3;

	return EXIT_SUCCESS;

}