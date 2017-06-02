main: main.o Binaria.o
	g++ main.o Binaria.o -o Main

main.o: main.cpp Binaria.h
	g++ -c main.cpp

Binaria.o: Binaria.cpp Binaria.h
	g++ -c Binaria.cpp

clean:
	rm -f *.o main