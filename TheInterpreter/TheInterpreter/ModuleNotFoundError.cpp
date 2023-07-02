#include "ModuleNotFoundError.h"

ModuleNotFoundError::ModuleNotFoundError(std::string moduleName)
{
	this->_moduleName = moduleName;
}

const char* ModuleNotFoundError::what() const noexcept
{
	return ("ModuleNotFoundError: No module named '" + this->_moduleName + "'").c_str();
}
