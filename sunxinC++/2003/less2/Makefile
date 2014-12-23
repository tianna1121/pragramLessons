point.exe: point.o main.o
	g++ -o point.exe point.o main.o

point.o: Point.cpp
	g++ -c Point.cpp
main.o: Main.cpp
	g++ -c Main.cpp

clean:
	rm point.o point.exe main.o 
