#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Stack {
	class Node;
public:
	Stack(int capacity=5);
	~Stack();

	Node* top;
	int capacity;
	int size;

	int getMin();
	void push(int value);
	int pop();
	int peek();
	bool isEmpty();
	bool isFull();
	int getCapacity();

private:

};