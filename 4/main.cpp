#include "Chaine.h"

#include <cstdlib>
#include <iostream>


using namespace std;

int main() {

	char str[10] = "test";

	Chaine c(str);


	cout << "Chaine : " << c << " - Longueur : " << c.getLongueur() << " - Capacité : " << c.getCapacite() << endl;


	char bigStr[40] = "abcdefghijklmnopqrtsuvwxyz0123456789";
	c = bigStr;

	cout << "Chaine : " << c << " - Longueur : " << c.getLongueur() << " - Capacité : " << c.getCapacite() << endl;


	char notSmallStr[40] = "abcdefghijklmnopqrtsuvwxyz";
	c = notSmallStr;

	cout << "Chaine : " << c << " - Longueur : " << c.getLongueur() << " - Capacité : " << c.getCapacite() << endl;


	return EXIT_SUCCESS;

}