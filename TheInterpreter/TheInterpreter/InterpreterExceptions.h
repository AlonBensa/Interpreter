#pragma once
#include <exception>
#include <string>
#include <iostream>

class InterpreterExceptions : public std::exception
{
public:
	virtual const char* what() const noexcept = 0;
};

