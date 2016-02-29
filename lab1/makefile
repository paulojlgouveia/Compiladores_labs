
make: clear .o .exe clean

clear:
	clear

.o:
	g++ -ansi -pedantic -Wall -c MagicLamp.cpp
	g++ -ansi -pedantic -Wall -c main.cpp

.exe: 
	g++ -o app MagicLamp.o main.o
	./app

clean:
	rm -f *.o
	rm -f app