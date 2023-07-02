#include "String.h"

int String::findLength() const
{
    return 0;
}

String::String(std::string string, bool isTemp)
{
}

bool String::getIsTemp() const
{
    return false;
}

void String::setIsTemp(bool isTemp)
{

}

bool String::isPrintable() const
{
    return false;
}

std::string String::toString() const
{
    return std::string();
}

bool String::startsWith(std::string prefix, int start, int end) const
{
    return false;
}

bool String::endsWith(std::string suffix, int start, int end) const
{
    return false;
}

std::string String::strip(std::string characters) const
{
    return std::string();
}

std::string String::lStrip(std::string characters) const
{
    return std::string();
}

std::string String::rStrip(std::string characters) const
{
    return std::string();
}

int String::find(std::string sub, int start, int end) const
{
    return 0;
}

int String::rFind(std::string sub, int start, int end) const
{
    return 0;
}

std::string String::lJust(int length, char fillChar) const
{
    return std::string();
}

std::string String::rJust(int length, char fillChar) const
{
    return std::string();
}

int String::index(std::string sub, int start, int end) const
{
    return 0;
}

std::string String::rIndex(std::string sub, int start, int end) const
{
    return std::string();
}

Type* String::partition(std::string separator) const
{
    return nullptr;
}

Type* String::rPartition(std::string separator) const
{
    return nullptr;
}

Type* String::split(std::string separator, int maxSplit) const
{
    return nullptr;
}

Type* String::rSplit(std::string separator, int maxSplit) const
{
    return nullptr;
}

Type* String::splitLines() const
{
    return nullptr;
}

std::string String::lower() const
{
    return std::string();
}

std::string String::upper() const
{
    return std::string();
}

std::string String::format(std::string value) const
{
    return std::string();
}

std::string String::formatMap(Type* dict) const
{
    return std::string();
}

bool String::isAlNum() const
{
    return false;
}

bool String::isAlpha() const
{
    return false;
}

bool String::isNumeric() const
{
    return false;
}

bool String::isIdentifier() const
{
    return false;
}

bool String::isLower() const
{
    return false;
}

bool String::isSpace() const
{
    return false;
}

bool String::isTitle() const
{
    return false;
}

bool String::isUpper() const
{
    return false;
}

Type* String::makeTrans(std::string charactersToBeReplaced, std::string charactersToReplace, std::string charactersToBeRemoved) const
{
    return nullptr;
}

std::string String::replace(std::string oldStr, std::string newStr, int count) const
{
    return std::string();
}

int String::count(std::string sub, int start, int end)
{
    return 0;
}

std::string String::center(int length, char fillChar) const
{
    return std::string();
}

std::string String::expandTabs(int tabSize) const
{
    return std::string();
}

std::string String::translate(Type* table) const
{
    return std::string();
}

std::string String::join(Type* iterable) const
{
    return std::string();
}

std::string String::capitalize() const
{
    return std::string();
}

std::string String::swapCase() const
{
    return std::string();
}

std::string String::title() const
{
    return std::string();
}

std::string String::zFill() const
{
    return std::string();
}
