#include "Tuple.h"

int Tuple::findLength() const
{
    return 0;
}

Tuple::Tuple(std::vector<Type*> tuple, bool isTemp)
{
}

bool Tuple::getIsTemp() const
{
    return false;
}

void Tuple::setIsTemp(bool isTemp)
{

}

bool Tuple::isPrintable() const
{
    return false;
}

std::string Tuple::toString() const
{
    return std::string();
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
