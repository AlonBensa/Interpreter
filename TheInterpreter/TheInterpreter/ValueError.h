#pragma once
#include "InterpreterExceptions.h"

class ValueError : public InterpreterExceptions
{
public:
	ValueError(std::string wrongType, std::string currentType);
	virtual const char* what() const noexcept;
private:
	std::string _wrongType;
	std::string _currentType;
};

