CFLAGS=-std=c++11 -g

all: main.cpp LinkedList.h
	g++ $(CFLAGS) -o linkedlist main.cpp LinkedList.h LinkedListInterface.h

test: test.cpp LinkedList.h
	g++ $(CFLAGS) -o test test.cpp LinkedList.h LinkedListInterface.h

clean:
	rm -f test
