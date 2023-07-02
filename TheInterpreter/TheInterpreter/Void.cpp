#include "Void.h"

Void::Void()
{
}

bool Void::getIsTemp() const
{
    return false;
}

void Void::setIsTemp(bool isTemp)
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
