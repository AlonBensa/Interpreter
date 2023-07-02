#include "KeyError.h"

KeyError::KeyError(std::string key)
{
	this->_key = key;
}

const char* KeyError::what() const noexcept
{
	return ("KeyError: " + this->_key).c_str();
}
