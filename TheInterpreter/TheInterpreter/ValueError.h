#pragma once
#include "InterpreterExceptions.h"

class ValueError : public InterpreterExceptions
{
public:
	ValueError(std::string convertType, std::string currentType, std::string value);
	ValueError(std::string library);
	virtual const char* what() const noexcept;
private:
	std::string _convertType;  // The Type you want to Convert
	std::string _currentType; // The Type Of the value
	std::string _value; // The Value Trying to convert
	std::string _library; // Value Error from which Library (math/string/daytime)
};

