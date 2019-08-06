#pragma once

//includes
#ifndef LINKEDLIST_H
#include "LinkedList.h"
#endif // !LINKEDLIST_H
#ifndef STRING
#include <string>
#endif
#ifndef IOSTREAM
#include <iostream>
#endif
using namespace std;

//namespace for 'overloading' run
namespace KfromEnd
{
	void run();
}

//functions
void kfromEnd(LinkedList list, int k);