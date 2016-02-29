
make: clear .o .exe clean

clear:
	clear

.o:
	g++ -ansi -pedantic -Wall -c MagicLamp.cpp
	g++ -ansi -pedantic -Wall -c main.cpp

.exe: 
	g++ -o app MagicLamp.o main.o

clean:
	rm *.o
	./app