#pragma once
#include "InterpreterExceptions.h"

class RuntimeError : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;
};

