#include "AttributeError.h"


AttributeError::AttributeError(std::string type, std::string _attribute)
{
	this->_type = type;
	this->_attribute = _attribute;
}

const char* AttributeError::what() const noexcept
{
	return ("'" + this->_type + "' object has no attribute '" + this->_attribute + "'").c_str();
}

