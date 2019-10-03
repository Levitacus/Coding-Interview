#pragma once
#include <iostream>
#include <exception>
using namespace std;


class MyException : std::exception {
	virtual const char* what() const throw()
	{
		return "My exception happened";
	}
} myex;