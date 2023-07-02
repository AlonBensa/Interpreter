#include "Float.h"

Float::Float(float num, bool isTemp)
{
    this->_num = num;
    this->_isTemp = isTemp;
}

bool Float::getIsTemp() const
{
    return this->_isTemp;
}

void Float::setIsTemp(bool isTemp)
{
    this->_isTemp = isTemp;
}

bool Float::isPrintable() const
{
    return true;
}

std::string Float::toString() const
{
    return std::to_string(this->_num);
}
