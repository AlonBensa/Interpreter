#include "KeyError.h"

KeyError::KeyError(std::string key)
{
	this->_key = key;
}
KeyError::KeyError()
{
	this->_key = "";
}
const char* KeyError::what() const noexcept
{
	if (this->_key == "") {
		return "KeyError: 'popitem(): dictionary is empty'";
	}
	return ("KeyError: " + this->_key).c_str();
}
