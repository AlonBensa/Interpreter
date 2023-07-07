#include "Integer.h"

Integer::Integer(int num, bool isTemp) : Type(isTemp)
{
    this->_num = num;
}

std::string Integer::toString() const
{
    return std::to_string(this->_num);
}

std::string Integer::getType() const
{
    return "Integer";
}
