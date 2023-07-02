#pragma once
#include "InterpreterExceptions.h"

class ZeroDivisionError : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;
};

