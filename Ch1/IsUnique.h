#pragma once

//includes
#ifndef STRING
#include <string>
#endif
#ifndef IOSTREAM
#include <iostream>
#endif
using namespace std;

//namespace for 'overloading' run
namespace IsUnique
{
	void run();
}

//functions
bool isUnique(const string str);
