#pragma once
#include "InterpreterExceptions.h"

class UnboundLocalError : public InterpreterExceptions
{
public:
	UnboundLocalError(std::string name);
	virtual const char* what() const noexcept;
private:
	std::string _name;
};

