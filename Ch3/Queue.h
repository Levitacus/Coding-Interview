#pragma once

#include "Node.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class Queue
{
private:
	//member variables
	Node *head, *tail;
	int capacity;
	int size;

public:
	//constructor and destructor
	Queue(int capacity = 5);
	~Queue();

	//funcs
	int getMin();
	void enqueue(int value);
	int dequeue();
	int peek();
	bool isEmpty();
	bool isFull();
	int getCapacity();
};