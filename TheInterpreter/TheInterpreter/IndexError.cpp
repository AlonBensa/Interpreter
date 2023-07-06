#include "IndexError.h"


IndexError::IndexError(std::string functionName)
{
	this->_functionName = functionName;
}

const char* IndexError::what() const noexcept
{
	if (!this->_functionName.empty()) 
	{
		return ("IndexError: " + this->_functionName + " index out of range").c_str();
	}
	return "IndexError: list index out of range";
}
