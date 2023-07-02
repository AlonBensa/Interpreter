#include "NameError.h"

NameError::NameError(std::string name)
{
	this->_name = name;
}

const char* NameError::what() const noexcept
{
	return ("NameError: '" + this->_name + "' is not defined").c_str();
}
