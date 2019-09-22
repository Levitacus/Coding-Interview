#include "ManyStacks.h";

ManyStacks::ManyStacks(const int size, const int stacks) {
	//size(int): size of each stack
	//stacks(int): stacks is the number of stacks in the array
	//we're technically using two arrays here, one for the stacks and one for counting how much is used in each stack
	this->size = size;
	this->stacks = stacks;
	allStacks = new int[(size * stacks)]();
	usedSpace = new int[stacks]();
}

ManyStacks::~ManyStacks() {
	delete[] allStacks;
	delete[] usedSpace;
}

int ManyStacks::pop(int stack) {
	if (isEmpty(stack)) {
		throw exception("Empty stack! Stack underflow!");
	}
	else {
		int value = allStacks[topIndex(stack)];
		//not important that we change the value in the allStacks array
		usedSpace[stack]--;
		return value;
	}
	return NULL;
}

void ManyStacks::push(int stack, int value) {
	//if not overflow?
	if (isFull(stack)) {
		cout << "Stack" << stack << "is full.\n";
	}
	else {
		usedSpace[stack]++;
		allStacks[topIndex(stack)] = value;
	}
}

int ManyStacks::peek(int stack) {
	if (!isEmpty(stack)) {
		return allStacks[topIndex(stack)];
	};
	cout << "Empty Stack " << stack << "\n";
	return NULL;
}

bool ManyStacks::isEmpty(int stack) {
	return usedSpace[stack] == 0;
}

bool ManyStacks::isFull(int stack) {
	return usedSpace[stack] == size;
}

int ManyStacks::topIndex(int stack) const {
	int start = size * stack;
	int test = ((usedSpace[stack]+start-1 >= 0) ? usedSpace[stack]+start-1 : 0);
	return test;
}