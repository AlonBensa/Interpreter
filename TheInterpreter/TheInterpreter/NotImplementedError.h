#pragma once
#include "InterpreterExceptions.h"

class NotImplementedError : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;
};

