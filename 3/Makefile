all: main mainCouleur
	
mainCouleur: Couleur.o EnsembleCouleur.o
	g++  -o mainCouleur mainCouleur.cpp EnsembleCouleur.o Couleur.o	

main: Ensemble.o
	g++  -o main main.cpp Ensemble.o

Ensemble.o:
	g++ -c Ensemble.cpp -o Ensemble.o 

EnsembleCouleur.o:
	g++ -c EnsembleCouleur.cpp -o EnsembleCouleur.o 

Couleur.o:
	g++ -c Couleur.cpp -o Couleur.o

clean:
	rm *.o