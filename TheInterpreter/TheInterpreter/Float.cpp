#include "Float.h"

Float::Float(float num, bool isTemp) : Type(isTemp)
{
    this->_num = num;
}

std::string Float::toString() const
{
    return std::to_string(this->_num);
}

std::string Float::getType() const
{
    return "Float";
}
