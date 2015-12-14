CC=g++ -std=c++11
CFLAGS=-c -g -Wall

all: driver

driver: main.o tree.o node.o
	$(CC) main.o tree.o node.o -g -o driver

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

tree.o: tree.cpp tree.h
	$(CC) $(CFLAGS) tree.cpp

node.o: node.cpp node.h
	$(CC) $(CFLAGS) node.cpp

clean:
	rm *.o driver
