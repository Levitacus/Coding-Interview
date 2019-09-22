#pragma once

//includes
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//LinkedList Classes
class ManyStacks {
private:
public:
	int* allStacks;
	int** tops;
	int size;
	int stacks;

	ManyStacks(int size = 5, int stacks = 3) {
		//size(int): size of each stack
		//stacks(int): stacks is the number of stacks in the array
		//we're technically using two arrays here, one for the stacks and one for the pointers for referencing the top of each stack
		//we could do it without the tops array, but we'd have to do a fixed number of stacks.
		allStacks = new int[size * stacks];
		tops = new int*[stacks];
		this->size = size;
		this->stacks = stacks;
		//set all the top pointers
		for (int i = 0; i < stacks; i++) {
			tops[i] = &(allStacks[size - 1]);
		}
	}

	int pop(int stack) {
		if (isEmpty(stack)) {
			throw exception("Empty stack! Stack underflow!");
		}
		else {
			return *tops[stack];
		}
	return 0;
	}

	void push(int stack, int value) {
		//if not overflow?
		tops[stack] = &(allStacks[*tops[stack]+1]);
		*tops[stack] = value;

	}

	int peek(int stack) {
		return 0;
	}

	bool isEmpty(int stack) {
		if (tops[stack] == nullptr) {
			return true;
		}
		return false;
	}
};