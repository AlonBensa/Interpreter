#pragma once
#include "InterpreterExceptions.h"

class RecursionError : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;
};

