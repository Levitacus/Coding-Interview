#pragma once
#include "Node.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Stack {
	//class Node;
private:
	//member variables
	Node* top;
	int capacity;
	int size;
public:
	//constructor and destructor
	Stack(int capacity=5);
	~Stack();

	//funcs
	int getMin();
	void push(int value);
	int pop();
	int peek();
	bool isEmpty();
	bool isFull();
	int getCapacity();


};