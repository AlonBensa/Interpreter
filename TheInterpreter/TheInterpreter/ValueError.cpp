#include "ValueError.h"

ValueError::ValueError(std::string convertType, std::string currentType, std::string objValue)
{
	this->_convertType = convertType;
	this->_currentType = currentType;
	this->_objValue = objValue;
}
ValueError::ValueError(std::string library)
{
	this->_library = library;
}
ValueError::ValueError(std::string objName,std::string function, int value) 
{
	this->_objName = objName;
	this->_function = function;
	this->_value = value;
}

ValueError::ValueError(std::string objName, std::string function)
{
	this->_objName = objName;
	this->_function = function;
}
const char* ValueError::what() const noexcept
{
	if (!this->_function.empty()) 
	{
		if (this->_function.compare("index") == 0) 
		{
			if (this->_objName.compare("list") == 0)
			{
				return ("ValueError: " + std::to_string(this->_value) + " is not in list").c_str();
			}
			else 
			{
				return "ValueError: tuple.index(x): x not in tuple";
			}
		}
		else 
		{
			return "ValueError: list.remove(x): x not in list";
		}
	}
	if (this->_library.compare("string") == 0) {
		return "ValueError: substring not found";
	}
	if (isInt(this->_convertType)) {
		return ("ValueError: invalid literal for int() with base 10: '" + this->_objValue + "'").c_str();
	}
	return ("ValueError: could not convert " + this->_currentType + "to " + this->_convertType + ":'" + this->_objValue + "'").c_str();
}
