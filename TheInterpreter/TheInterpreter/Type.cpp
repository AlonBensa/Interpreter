#include "Type.h"

Type::Type(bool isTemp)
{
	this->_isTemp = isTemp;
}

bool Type::getIsTemp() const
{
	return this->_isTemp;
}

void Type::setIsTemp(bool isTemp)
{
	this->_isTemp = isTemp;
}

bool Type::isPrintable() const
{
	return true;
}
