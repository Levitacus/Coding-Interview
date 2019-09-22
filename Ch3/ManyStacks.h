#pragma once

//includes
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//LinkedList Classes
class ManyStacks {
private:
	int* allStacks;
	int* usedSpace;
	int size;
	int stacks;

	int topIndex(int stack) const;
public:

	ManyStacks(const int size = 5, const int stacks = 3);

	~ManyStacks();

	int pop(int stack);

	void push(int stack, int value);

	int peek(int stack);

	bool isEmpty(int stack);

	bool isFull(int stack);
};