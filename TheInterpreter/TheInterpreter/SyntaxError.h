#pragma once
#include "InterpreterExceptions.h"

class SyntaxError : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;
};

