#include "ValueError.h"

ValueError::ValueError(std::string convertType, std::string currentType, std::string value)
{
	this->_convertType = convertType;
	this->_currentType = currentType;
	this->_value = value;
}

const char* ValueError::what() const noexcept
{
	if (isInt(this->_convertType)) {
		return ("ValueError: invalid literal for int() with base 10: '" + this->_value + "'").c_str();
	}
	return ("ValueError: could not convert " + this->_currentType + "to " + this->_convertType + ":'" + this->_value + "'").c_str();
}
