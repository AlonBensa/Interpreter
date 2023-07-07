#include "Void.h"

Void::Void(bool isTemp) : Type(isTemp)
{
}

bool Void::isPrintable() const
{
    return false;
}

std::string Void::toString() const
{
    return std::string();
}

std::string Void::getType() const
{
    return "Void";
}
