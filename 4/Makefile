all: main mainIntelligent
	
main: Chaine.o 
	g++  -o main main.cpp Chaine.o

mainIntelligent: ChaineIntelligente.o 
	g++  -o mainIntelligent mainIntelligent.cpp ChaineIntelligente.o

Chaine.o:
	g++ -c Chaine.cpp -o Chaine.o 

ChaineIntelligente.o:
	g++ -c ChaineIntelligente.cpp -o ChaineIntelligente.o 

clean:
	rm *.o