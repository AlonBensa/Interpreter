#include "ValueError.h"

ValueError::ValueError(std::string wrongType, std::string currentType)
{
	this->_wrongType = wrongType;
	this->_currentType = currentType;
}

const char* ValueError::what() const noexcept
{
	return ("ValueError: could not convert " + this->_currentType + "to " + this->_wrongType).c_str();
}
