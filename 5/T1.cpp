#include <iostream>
#include <cstring>
#include <cstdlib>


using namespace std;

class T1 {

public:
	T1() {
		cout << "Constructeur T1 "; 
		affiche();
	}

	~T1() {
		cout << "Destructeur T1 "; 
		affiche();
	}

	virtual void affiche() {
		cout << "Affiche T1" << endl; 
	}
};

class T2 : public T1 {
public:
	T2() : T1() {
	}

	~T2() {
	}

	void affiche() {
		cout << "Affiche T2" << endl;
	}
};

int main() {

	T1* t1 = new T1();
	T2* t2 = new T2();

	delete t1;
	delete t2;

	return EXIT_SUCCESS;


}