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
	Node* head = NULL;
	int listSize = 0;

	// void insert(int index, const T& item) {
	//
	// }

	// T remove(int index) {
	// 	return T();
	// }

	int find(const T& item) {
		int index = 0;
		//start with the head
		Node* current_val = head;
		//go through and look until the end
		while(current_val != NULL) {
				//cout << "item we're looking at now : " << current_val->item << endl;
				if (current_val->item == item) return index;//if it matches return the index
				index++;//increment the index
				current_val = current_val->next;//go to the next value
		}
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
		std::cout << "Inserting at the tail: " << value << '\n';
		//check to make sure there's a head
		if(head == NULL) {
			std::cout << "There's no head! We aren't going to be inserting at the tail today, instead:" << '\n';
			insertHead(value);
			return;
		}
		//start with the head
		Node* current_val = head;
		//go through and look for the end
		while(current_val->next != NULL) {
			current_val = current_val->next;
		}
		current_val->next = new Node(value);
		//increment the listSize
		listSize++;
	}

	/*
	insertAfter

	A node with the given value should be inserted immediately after the
	node whose value is equal to insertionNode.

	A node should only be added if the node whose value is equal to
	insertionNode is in the list. Do not allow duplicate values in the list.
	*/
	void insertAfter(T value, T insertionNode){
		//start with the head
		Node* current_val = head;
		//go until current_val points to the desired insertionNode
		while(current_val->next != NULL && insertionNode != current_val->item) {
			current_val = current_val->next;
		}
		//if we never found it, return without doing anything
		if (insertionNode != current_val->item) return;


		current_val->next = new Node(value, current_val->next);
		listSize++;
	}

	/*
	remove

	The node with the given value should be removed from the list.

	The list may or may not include a node with the given value.
	*/
	void remove(T value){
		//start with the head
		Node* current_val = head;
		//if it's the head redirect the head first, then remove
		if(head->item == value) {
			head = current_val->next;//redirect head
			delete current_val;
			listSize--;
			return;
		}
		//while the next value isn't null nor the value we're looking for
		while(current_val->next != NULL && value != current_val->next->item) {
			current_val = current_val->next;
		}
		//if it's null just ditch. You didn't find it.
		if (current_val->next == NULL) return;
		//if it's the next value delete it, making sure to not leave a hole in the links
		Node* tobedeleted = current_val->next;
		current_val->next = tobedeleted->next;//patching up the hole
		delete tobedeleted;
		listSize--;
	}

	/*
	clear

	Remove all nodes from the list.
	*/
	void clear(){
		while(listSize>0) {
			Node* current_val = head;
			head = current_val->next;//redirect head
			delete current_val;
			listSize--;
		}
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
		for (int i = 0; i < index; i++) {
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
			ss << whichNode->item;
			response += ss.str() + " ";
			whichNode = whichNode->next;
		}
		return response.substr(0, response.length()-1);
	}

};
