#pragma once
#include "InterpreterExceptions.h"

class IndexError : public InterpreterExceptions
{
public:
	IndexError(std::string functionName);
	virtual const char* what() const noexcept;
private:
	std::string _functionName;
};

