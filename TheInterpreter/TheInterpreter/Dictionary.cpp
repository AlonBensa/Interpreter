#include "Dictionary.h"

Dictionary::Dictionary(std::unordered_map<Type*, Type*> dictionary, bool isTemp)
{
    this->_dictionary = dictionary;
    this->_isTemp = isTemp;
}

int Dictionary::findLength() const
{
    return this->_dictionary.size();
}

bool Dictionary::getIsTemp() const
{
    return this->_isTemp;
}

void Dictionary::setIsTemp(bool isTemp)
{
    this->_isTemp = isTemp;
}

bool Dictionary::isPrintable() const
{
    return true;
}

std::string Dictionary::toString() const
{
    std::string dict = "{";

    for (const auto& elem : this->_dictionary) {
        dict += elem.first->toString();
        dict += ": ";
        dict += elem.second->toString();
        dict += ", ";
    }

    dict += "}";
    return dict;
}

void Dictionary::clear()
{
    this->_dictionary.clear();
}

std::unordered_map<Type*, Type*> Dictionary::copy() const
{
    return this->_dictionary;
}

Type* Dictionary::get(Type* key) const
{
    if (this->_dictionary.find(key) != this->_dictionary.end())
        return this->_dictionary.at(key);
}

std::vector<std::pair<Type*, Type*>> Dictionary::items() const
{
    std::vector<std::pair<Type*, Type*>> dictItems;

    for (const auto& elem : this->_dictionary) {
        dictItems.push_back({ elem.first, elem.second });
    }

    return dictItems;
}

std::vector<Type*> Dictionary::keys() const
{
    std::vector<Type*> dictKeys;

    for (const auto elem : this->_dictionary) {
        dictKeys.push_back(elem.first);
    }

    return dictKeys;
}

std::vector<Type*> Dictionary::values() const
{
    std::vector<Type*> dictValues;

    for (const auto& elem : this->_dictionary) {
        dictValues.push_back(elem.second);
    }

    return dictValues;
}

Type* Dictionary::pop(Type* key)
{
    if (this->_dictionary.find(key) == this->_dictionary.end()) {
        throw KeyError(key->toString());
        return;
    }

    Type* tmp = this->_dictionary[key];
    this->_dictionary.erase(key);
    return tmp;
}

std::pair<Type*, Type*> Dictionary::popItem()
{
    auto last = this->_dictionary.end();
    last--;

    this->_dictionary.erase(last);

    return { last->first, last->second };
}

void Dictionary::update(Dictionary dict)
{
    std::vector<std::pair<Type*, Type*>> anotherDict = dict.items();

    for (const auto elem : anotherDict) {
        this->_dictionary.insert(elem);
    }
}
