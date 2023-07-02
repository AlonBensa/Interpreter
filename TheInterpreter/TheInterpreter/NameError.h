#pragma once
#include "InterpreterExceptions.h"

class NameError : public InterpreterExceptions
{
public:
	NameError(std::string name);
	virtual const char* what() const noexcept;
private:
	std::string _name;
};

