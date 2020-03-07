CFLAGS=-std=c++11 -g

all: test.cpp LinkedList.h
	g++ $(CFLAGS) -o test test.cpp LinkedList.h LinkedListInterface.h

clean:
	rm -f test
