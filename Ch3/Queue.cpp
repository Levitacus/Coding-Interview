#pragma once
#include "Queue.h"

Queue::Queue(int capacity) {
	head = nullptr;
	tail = nullptr;
	this->capacity = capacity;
	this->size = 0;
}

Queue::~Queue() {
	while (head != nullptr) {
		Node* np = head;
		head = head->getNext();
		delete np;
	}
}

int Queue::getMin() {
	if (isEmpty()) {
		return NULL;
	}
	return tail->getMin();
}

void Queue::enqueue(int value) {
	if (isFull()) {
		throw exception("Queue is full.");
	}
	else {
		if (isEmpty()) {
			head = new Node(value, value, nullptr);
			tail = head;
		}
		else {
			Node* node = new Node(value, ((tail->getMin() < value) ? tail->getMin() : value), nullptr);
			tail->setNext(node);
			tail = node;
		}
		size += 1;
	}
}

int Queue::dequeue() {
	if (isEmpty()) {
		throw exception("Queue is empty.");
	}
	else {
		Node* node = head;
		int val = node->getValue();
		head = head->getNext();
		delete node;
		size -= 1;
		return val;
	}
}

int Queue::peek() {
	if (isEmpty()) { throw exception("Queue is empty."); }
	return head->getValue();
}

bool Queue::isEmpty() {
	return (head == nullptr);
}

bool Queue::isFull() {
	return (size == capacity);
}

int Queue::getCapacity() {
	return capacity;
}