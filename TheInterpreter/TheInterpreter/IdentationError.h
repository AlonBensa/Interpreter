#pragma once
#include "InterpreterExceptions.h"

class IdentationError : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;

};

