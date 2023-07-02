#pragma once
#include "InterpreterExceptions.h"

class AttributeError : public InterpreterExceptions
{
public:
	AttributeError(std::string type, std::string _attribute);
	virtual const char* what() const noexcept;
private:
	std::string _type;
	std::string _attribute;
};

