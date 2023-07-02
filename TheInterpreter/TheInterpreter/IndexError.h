#pragma once
#include "InterpreterExceptions.h"

class IndexError : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;
};

