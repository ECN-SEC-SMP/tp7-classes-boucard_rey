main: main.o Point.o Forme.o Cercle.o Rectangle.o Carre.o
	g++ -o main main.o Point.o Forme.o Cercle.o Rectangle.o Carre.o
Point.o: Point.cpp
	g++ -c Point.cpp
Forme.o: Forme.cpp
	g++ -c Forme.cpp
main.o: main.cpp
	g++ -c main.cpp
Cercle.o: Cercle.cpp
	g++ -c Cercle.cpp
Rectangle.o: Rectangle.cpp
	g++ -c Rectangle.cpp
Carre.o: Carre.cpp
	g++ -c Carre.cpp
