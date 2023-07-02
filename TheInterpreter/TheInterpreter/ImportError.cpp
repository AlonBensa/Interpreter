#include "ImportError.h"

ImportError::ImportError(std::string moduleName)
{
	this->_moduleName = moduleName;
}

const char* ImportError::what() const noexcept
{
	return ("ImportError: No module named " + this->_moduleName).c_str();
}
