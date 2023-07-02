#pragma once
#include "InterpreterExceptions.h"

class MemoryError : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;
};

