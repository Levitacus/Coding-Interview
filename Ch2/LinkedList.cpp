#include "LinkedList.h"

LinkedList::LinkedList(int numElements)
{
	this->head = nullptr;

	srand(time(0));
	int value;
	for (int i = 0; i < numElements; i++) {
		value = (rand() % 10) + 1;
		this->append(value);
	}
}

LinkedList::~LinkedList()
{
}

void LinkedList::append(int value) {
	Node* x = this->head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->value = NULL;
	newNode->value = value;
	newNode->next = nullptr;
	newNode->prev = nullptr;
	if (this->head == nullptr) {
		this->head = newNode;
	}
	else {
		while (x->next != nullptr) {
			x = x->next;
		}
		x->next = newNode;
		newNode->prev = x;
	}
}
/*
void LinkedList::remove(int value) {
	Node* x = this->search(value);
	x->next->prev = x->prev;
	x->prev->next = x->next;
	free(x);
}
*/

void LinkedList::remove(Node* key) {
	//iterate through the linkedlist and if the dereferenced node is equal to our key, then remove
	Node* node = this->head;
}
void LinkedList::data() {
	Node* node = this->head;
	while (node != nullptr) {
		std::cout << node->value << ", ";
		node = node->next;
	}
	std::cout << "\n";
}

void LinkedList::dupRemove() {
	//without a buffer, need to use two pointers, a "fast" one and a "slow" one, O(n^2)
	//with a buffer, could use a hash table
	Node* fast = this->head;
	Node* slow = this->head;
	int i;
	while (slow->next != nullptr) {
		i = slow->value;
		fast = slow->next;
		while (fast != nullptr) {
			if (fast->value == i) {
				Node* deleted = fast;
				fast = fast->next;
				deleted->prev->next = deleted->next;
				if (deleted->next != nullptr) {
					deleted->next->prev = deleted->prev;
				}
				deleted->next = nullptr;
				deleted->prev = nullptr;
				free(deleted);
			}
			else {
				fast = fast->next;
			}
		}
		slow = slow->next;
	}
}