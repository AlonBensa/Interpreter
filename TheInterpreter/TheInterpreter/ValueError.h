#pragma once
#include "InterpreterExceptions.h"

class ValueError : public InterpreterExceptions
{
public:
	ValueError(std::string convertType, std::string currentType, std::string value);
	virtual const char* what() const noexcept;
private:
	std::string _convertType;
	std::string _currentType;
	std::string _value;
};

