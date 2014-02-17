#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main ()
{

	const int TAILLE = 30;

	char nom[TAILLE];
	char prenom[TAILLE];
	char concatenee[2*TAILLE];

	cout << "Nom : ";
	cin >> nom;

	cout << "Prénom : ";
	cin >> prenom;

	strcpy(concatenee, nom);
	strcat(concatenee, " ");
	strcat(concatenee, prenom);

	cout << "concatenee : " << concatenee << endl;

	string sNom;
	string sPrenom;
	string sConcatenee;

	cout << "Nom : ";
	cin >> sNom;

	cout << "Prénom : ";
	cin >> sPrenom;


	sConcatenee = sNom;
	sConcatenee += " ";
	sConcatenee += sPrenom;


	cout << "concatenee : " << sConcatenee << endl;

	return EXIT_SUCCESS;

}