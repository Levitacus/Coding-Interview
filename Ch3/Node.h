#pragma once

#ifndef NODE_H
#define NODE_H
#endif // !NODE_H

#include <cstdlib>
using namespace std;

class Node
{
private:
	int value;
	int min;
	Node* next;

public:
	Node(int value=NULL, int min=NULL, Node* next=nullptr) 
	{ 
		this->value = value;
		this->min = min;
		this->next = next;
	}

	int getValue() { return value; }
	void setValue(int value) { this->value = value; }
	
	int getMin() { return min; }
	void setMin(int min) { this->min = min; }
	
	Node* getNext() { return next; }
	void setNext(Node* next) { this->next = next; }
};