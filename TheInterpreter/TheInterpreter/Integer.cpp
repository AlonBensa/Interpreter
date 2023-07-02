#include "Integer.h"

Integer::Integer(int num, bool isTemp)
{
    this->_num = num;
    this->_isTemp = isTemp;
}

bool Integer::getIsTemp() const
{
    return this->_isTemp;
}

void Integer::setIsTemp(bool isTemp)
{
    this->_isTemp = isTemp;
}

bool Integer::isPrintable() const
{
    return true;
}

std::string Integer::toString() const
{
    return std::to_string(this->_num);
}
