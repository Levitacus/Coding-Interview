#pragma once

//includes
#ifndef DUPREMOVE_H
#include "DupRemove.h"
#endif
#ifndef LINKEDLIST_H
#include "LinkedList.h"
#endif // !LINKEDLIST_H
#ifndef KFROMEND_H
#include "KfromEnd.h"
#endif


#include <string>
#include <iostream>
#include <map>
using namespace std;

//typedefs
typedef void (*function)(void); // function pointer type
typedef map<std::string, function> functionMap; //map tuple of string, func ptr

//function headers
bool runFunc(const string inputStr, const functionMap& funcs);
void printFuncs(const functionMap& funcs);