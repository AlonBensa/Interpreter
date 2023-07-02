#include "Boolean.h"

Boolean::Boolean(bool flag, bool isTemp)
{
    this->_flag = flag;
    this->_isTemp = isTemp;
}

bool Boolean::getIsTemp() const
{
    return this->_isTemp;
}

void Boolean::setIsTemp(bool isTemp)
{
    this->_isTemp = isTemp;
}

bool Boolean::isPrintable() const
{
    return true;
}

std::string Boolean::toString() const
{
    return std::to_string(this->_flag);
}
