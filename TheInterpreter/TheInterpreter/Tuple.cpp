#include "Tuple.h"

Tuple::Tuple(std::vector<Type*> tuple, bool isTemp) : Sequence(isTemp)
{
}

int Tuple::findLength() const
{
    return 0;
}

std::string Tuple::toString() const
{
    return std::string();
}

std::string Tuple::getType() const
{
    return "Tuple";
}

int Tuple::index(std::string varName) const
{
    return 0;
}

int Tuple::count(std::string varName) const
{
    return 0;
}

Type* Tuple::operator[](int n) const
{
    return this->_tuple[0];
}
