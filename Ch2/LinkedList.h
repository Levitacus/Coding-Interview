#pragma once

//includes
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//LinkedList Classes
class LinkedList
{
public:
	struct Node {
		Node* next;
		Node* prev;
		int value;
	};
	Node* head;

	LinkedList(int numElements = 10);
	~LinkedList();

	Node* search(int value) {
		Node* x = this->head;
		while (x != nullptr && x->value != value)
		{
			x = x->next;
		}

		return x;
	}

	void append(int value);
	void data();
	void remove(Node* key);
	void dupRemove();

private:
};