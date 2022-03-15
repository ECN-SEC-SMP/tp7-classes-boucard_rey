main: main.o Point.o Forme.o
	g++ -o main main.o Point.o Forme.o
Point.o: Point.cpp
	g++ -c Point.cpp
Forme.o: Forme.cpp
	g++ -c Forme.cpp
main.o: main.cpp
	g++ -c main.cpp