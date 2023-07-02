#include "PermissionError.h"

PermissionError::PermissionError(std::string pathFile)
{
	this->_pathFile = pathFile;
}

const char* PermissionError::what() const noexcept
{
	return ("PermissionError: Premission denied: '" + this->_pathFile + "'").c_str();
