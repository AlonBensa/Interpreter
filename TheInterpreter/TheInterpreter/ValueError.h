#pragma once
#include "InterpreterExceptions.h"

class ValueError : public InterpreterExceptions
{
public:
	ValueError(std::string convertType, std::string currentType, std::string objValue);
	ValueError(std::string library);
	ValueError(std::string objName,std::string function, int value);
	ValueError(std::string objName, std::string function);
	virtual const char* what() const noexcept;
private:
	std::string _convertType;  // The Type you want to Convert
	std::string _currentType; // The Type Of the value
	std::string _objValue; // The Value Trying to convert
	std::string _library; // Value Error from which Library (math/string/daytime)
	std::string _function; // theFunction used for example remove() / index()
	std::string _objName; // the object name that uses function List / Tuple
	int _value; // The Value Passed in the function
};

