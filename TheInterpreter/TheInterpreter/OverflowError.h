#pragma once
#include "InterpreterExceptions.h"

class OverflowError : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;
};

