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

Float& Float::exponentionEqual(const Type*& other)
{
    this->_num = std::pow(this->_num, std::stof(other->toString()));
    return *this;
}

Float& Float::floorDivisionEqual(const Type*& other)
{
    float divisor = std::stof(other->toString());

    if (divisor == 0.0f) {
        throw ZeroDivisionError();
        return;
    }

    this->_num = std::floor(this->_num / divisor);
    return *this;
}

Float Float::exponention(const Type* other)
{
    return Float(*this).exponentionEqual(other);
}

Float Float::floorDivision(const Type* other)
{
    return Float(*this).floorDivisionEqual(other);
}

Float& Float::operator=(const Type*& other)
{
    this->_num = std::stof(other->toString());
    this->_isTemp = other->getIsTemp();
    return *this;
}

Float& Float::operator+=(const Type*& other)
{
    this->_num += std::stof(other->toString());
    return *this;
}

Float& Float::operator-=(const Type*& other)
{
    this->_num -= std::stof(other->toString());
    return *this;
}

Float& Float::operator*=(const Type*& other)
{
    this->_num *= std::stof(other->toString());
    return *this;
}

Float& Float::operator/=(const Type*& other)
{
    this->_num /= std::stof(other->toString());
    return *this;
}

Float& Float::operator%=(const Type*& other)
{
    this->_num = std::fmod(this->_num, std::stof(other->toString()));
    return *this;
}

Float& Float::operator++(int)
{
    this->_num++;
    return *this;
}

Float& Float::operator--(int)
{
    this->_num--;
    return *this;
}

Float Float::operator+(const Type*& other) const
{
    return Float(*this) += other;
}

Float Float::operator-(const Type*& other) const
{
    return Float(*this) -= other;
}

Float Float::operator*(const Type*& other) const
{
    return Float(*this) *= other;
}

Float Float::operator/(const Type*& other) const
{
    return Float(*this) /= other;
}

Float Float::operator%(const Type*& other) const
{
    return Float(*this) %= other;
}

bool Float::operator==(const Type*& other) const
{
    return this->_num == std::stof(other->toString());
}

bool Float::operator!=(const Type*& other) const
{
    return this->_num != std::stof(other->toString());
}

bool Float::operator>(const Type*& other) const
{
    return this->_num > std::stof(other->toString());
}

bool Float::operator<(const Type*& other) const
{
    return this->_num < std::stof(other->toString());
}

bool Float::operator>=(const Type*& other) const
{
    return this->_num >= std::stof(other->toString());
}

bool Float::operator<=(const Type*& other) const
{
    return this->_num <= std::stof(other->toString());
}
