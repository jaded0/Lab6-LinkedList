//#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

template<typename T>
class LinkedList
{
private:
public:
	struct Node {
		T item;
		Node* next;
		Node(const T& item, Node* next_val = NULL) :
			item(item) {next = next_val;}
	};
	Node* head;
	int listSize = 0;

	void insert(int index, const T& item) {

	}

	T remove(int index) {
		return T();
	}

	int find(const T& item) {
		return -1;
	}

	//LinkedListInterface(void) {};
	// virtual ~LinkedListInterface(void) {};

	/*
	insertHead

	A node with the given value should be inserted at the beginning of the list.

	Do not allow duplicate values in the list.
	*/
	void insertHead(T value){
		std::cout << "Inserting at the head: " << value << '\n';
		//put it at the head
		if(listSize == 0) head = new Node(value);//if there is no head just put it there
		else { //if there is a head, insert it correctly without losing track of the old head
			Node* temp = new Node(value, head);
			head = temp;
		}
		//increment the listSize
		listSize++;
	}

	/*
	insertTail

	A node with the given value should be inserted at the end of the list.

	Do not allow duplicate values in the list.
	*/
	void insertTail(T value){

	}

	/*
	insertAfter

	A node with the given value should be inserted immediately after the
	node whose value is equal to insertionNode.

	A node should only be added if the node whose value is equal to
	insertionNode is in the list. Do not allow duplicate values in the list.
	*/
	void insertAfter(T value, T insertionNode){

	}

	/*
	remove

	The node with the given value should be removed from the list.

	The list may or may not include a node with the given value.
	*/
	// void remove(T value){
	//
	// }

	/*
	clear

	Remove all nodes from the list.
	*/
	void clear(){

	}

	/*
	at

	Returns the value of the node at the given index. The list begins at
	index 0.

	If the given index is out of range of the list, throw an out of range exception.
	*/
	T at(int index){
		//if out of range throw exception
		if(index<0 || index>listSize-1) {
			throw std::out_of_range ("out_of_range");
		}
		//go up to that index and return the value
		Node* currentNode = this->head;
		for (size_t i = 0; i < index; i++) {
			currentNode = currentNode->next;
		}
		return currentNode->item;
	}

	/*
	size

	Returns the number of nodes in the list.
	*/
	int size(){
		return listSize;
	}

	/*
	toString

	Returns a string representation of the list, with the value of each node listed in order (Starting from the head) and separated by a single space
	There should be no trailing space at the end of the string

	For example, a LinkedList containing the value 1, 2, 3, 4, and 5 should return
	"1 2 3 4 5"
	*/
	string toString(){
		string response = "";
		Node* whichNode = this->head;

 		for (size_t i = 0; i < listSize; i++) {
			//using stringstream we can have datatype-independent converstion to a string
			stringstream ss;
			string add;
			ss << whichNode->item;
			ss >> add;
			response += add + " ";
			whichNode = whichNode->next;
		}
		return response.substr(0, response.length()-1);
	}

};
