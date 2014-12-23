CFLAGS = -g
point.exe: point.o main.o fish.o animal.o
	g++ -o point.exe point.o main.o fish.o animal.o $(CFLAGS)

point.o: Point.cpp
	g++ -c Point.cpp
main.o: Main.cpp
	g++ -c Main.cpp
animal.o:
	g++ -c Animal.cpp
fish.o:
	g++ -c Fish.cpp

clean:
	rm point.o point.exe main.o fish.o animal.o
