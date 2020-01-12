#pragma once
#include "Stack.h"
/*
class Stack::Node {
public:
	int value;
	int min;
	Node* next;

	Node(int value=NULL, int min=NULL, Node* next=nullptr) {
		this->value = value;
		this->min = min;
		this->next = next;
	}
};
*/
Stack::Stack(int capacity) {
	top = nullptr;
	this->capacity = capacity;
	this->size = 0;
}

Stack::~Stack() {
	while (top != nullptr) {
		Node* np = top;
		top = top->getNext();
		delete np;
	}
}

int Stack::getMin() {
	if (isEmpty()) {
		return NULL;
	}
	return top->getMin();
}

void Stack::push(int value) {
	if (isFull()) {
		throw exception("Stack is full.");
	}
	else {
		if (isEmpty()) {
			top = new Node(value, value, nullptr);
		}
		else {
			Node* node = new Node(value, ((top->getMin() < value) ? top->getMin() : value), top);
			top = node;
		}
		size += 1;
	}
}

int Stack::pop() {
	if (isEmpty()) {
		throw exception("Stack is empty.");
	}
	else {
		Node* node = top;
		int val = node->getValue();
		top = top->getNext();
		delete node;
		size -= 1;
		return val;
	}
}

int Stack::peek() {
	return top->getValue();
}

bool Stack::isEmpty() {
	return (top == nullptr);
}

bool Stack::isFull() {
	return (size == capacity);
}

int Stack::getCapacity() {
	return capacity;
}