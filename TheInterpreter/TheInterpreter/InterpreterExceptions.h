#pragma once
#include <exception>
#include <string>
#include <iostream>
#include "Type.h"
#include "Sequence.h"

class InterpreterExceptions : public std::exception
{
public:
	virtual const char* what() const noexcept = 0;
};

