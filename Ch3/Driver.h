#pragma once

//includes
#include "ManyStacks.h"
#include "Stack.h"
#include "Queue.h"

#include <string>
#include <iostream>
#include <map>
using namespace std;

//typedefs
typedef void (*function)(void); // function pointer type
typedef map<std::string, function> functionMap; //map tuple of string, func ptr

//function headers
void threeStacks();
void minStack();

void generateVals(ManyStacks* stacks);
void createStack(Stack* stack);

bool runFunc(const string inputStr, const functionMap& funcs);
void printFuncs(const functionMap& funcs);