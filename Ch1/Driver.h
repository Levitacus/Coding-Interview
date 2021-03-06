#pragma once

//includes
#include <string>
#include <iostream>
#include <map>
using namespace std;
#include "IsUnique.h"

//typedefs
typedef void (*function)(void); // function pointer type
typedef map<std::string, function> functionMap; //map tuple of string, func ptr

//function headers
bool runFunc(const string inputStr, const functionMap& funcs);
void printFuncs(const functionMap& funcs);