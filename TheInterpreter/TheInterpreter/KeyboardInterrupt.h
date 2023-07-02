#pragma once
#include "InterpreterExceptions.h"

class KeyboardInterrupt : public InterpreterExceptions
{
public:
	virtual const char* what() const noexcept;
};

