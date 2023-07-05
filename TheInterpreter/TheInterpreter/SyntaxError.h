#pragma once
#include "InterpreterExceptions.h"

class SyntaxError : public InterpreterExceptions
{
public:
	SyntaxError(bool allocateMemory);
	virtual const char* what() const noexcept;
private:
	bool _allocateMemory; // savedMemory
};

