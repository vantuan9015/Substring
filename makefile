substring: substring.o main.o
	g++ -g -Wall -o substring substring.o main.o

main.o: main.cpp substring.h
	g++ -g -Wall -c main.cpp 

substring.o: substring.cpp substring.h
	g++ -g -Wall -c substring.cpp

clean:
	rm -f substring.o main.o substring
