#include "KeyError.h"

KeyError::KeyError(std::string key,bool isEmpty,std::string functionName)
{
	this->_key = key;
	this->_isEmpty = isEmpty;
	this->_functionName = functionName;
}

const char* KeyError::what() const noexcept
{
	if (this->_isEmpty && strcmp(this->_functionName.c_str(), "popitem()") == 0) {
		return "KeyError: 'popitem(): dictionary is empty'";
	}
	return ("KeyError: " + this->_key).c_str();
}
