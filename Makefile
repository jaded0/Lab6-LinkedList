all: test.cpp LinkedList.h
	g++ -o test test.cpp LinkedList.h LinkedListInterface.h

clean:
	rm -f test
