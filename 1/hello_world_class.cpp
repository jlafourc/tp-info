#include <iostream>
using namespace std;

class HelloWorld {
	public:
		void afficher();
};

void HelloWorld::afficher() {
	cout << "Hello World!\n";
}

int main ()
{
	HelloWorld h;
	h.afficher();
}


