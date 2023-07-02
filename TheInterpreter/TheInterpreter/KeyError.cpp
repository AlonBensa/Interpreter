#include "KeyError.h"

KeyError::KeyError(std::string key,int amount)
{
	this->_key = key;
	this->_amount = amount;
}

const char* KeyError::what() const noexcept
{
	if (this->_amount == 0) {
		return "KeyError: 'popitem(): dictionary is empty'";
	}
	return ("KeyError: " + this->_key).c_str();
}
