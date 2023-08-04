#include "Tuple.h"

Tuple::Tuple(std::vector<Type*> tuple, bool isTemp) : Sequence(isTemp)
{
    this->_tuple = tuple;
}

int Tuple::findLength() const
{
    return this->_tuple.size();
}

std::string Tuple::toString() const
{
    std::string tuple = "(";

    for (const auto elem : this->_tuple) {
        tuple += elem->toString();
        tuple += ", ";
    }
    tuple += ")";

    return tuple;
}

std::string Tuple::getType() const
{
    return "Tuple";
}

std::vector<Type*> Tuple::copy()
{
    return this->_tuple;
}

int Tuple::index(Type* obj) const
{
    for (int i = 0; i < this->_tuple.size(); i++) {
        if (this->_tuple[i] == obj)
            return i;
    }
    return -1;
}

int Tuple::count(Type* obj) const
{
    int count = 0;

    for (const auto elem : this->_tuple) {
        if (obj->toString() == this->toString())
            count++;
    }

    return count;
}

Type* Tuple::operator[](int n) const
{
    return this->_tuple[n];
}
