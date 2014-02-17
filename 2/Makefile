all: Produit.o Stock.o
	g++  -o main main.cpp Produit.o Stock.o

Produit.o:
	g++ -c Produit.cpp -o Produit.o 

Stock.o:
	g++ -c Stock.cpp -o Stock.o 

clean:
	rm *.o