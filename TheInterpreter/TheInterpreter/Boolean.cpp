#include "Boolean.h"

Boolean::Boolean(bool flag, bool isTemp) : Type(isTemp)
{
    this->_flag = flag;
}

std::string Boolean::toString() const
{
    return std::to_string(this->_flag);
}

std::string Boolean::getType() const
{
    return "Boolean";
}
