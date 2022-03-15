main: main.o Point.o
	g++ -o main main.o Point.o
Point.o: Point.cpp
	g++ -c Point.cpp
main.o: main.cpp
	g++ -c main.cpp
