all: main
	
main: Personne.o Etudiant.o Enseignant.o
	g++  -o main main.cpp Personne.o Etudiant.o Enseignant.o

Personne.o:
	g++ -c Personne.cpp -o Personne.o 

Etudiant.o: Personne.o
	g++ -c Etudiant.cpp -o Etudiant.o 

Enseignant.o: Personne.o
	g++ -c Enseignant.cpp -o Enseignant.o 

clean:
	rm *.o