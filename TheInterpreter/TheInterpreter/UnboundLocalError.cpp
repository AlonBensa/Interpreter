#include "UnboundLocalError.h"

UnboundLocalError::UnboundLocalError(std::string name)
{
	this->_name = name;
}

const char* UnboundLocalError::what() const noexcept
{
	return ("UnBoundLocalError: local variable '" + this->_name + "'referenced before assignment").c_str();
}
