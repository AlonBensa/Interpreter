#include "List.h"

List::List(std::vector<Type*> list, bool isTemp)
{
    this->_list = list;
    this->_isTemp = isTemp;
}

int List::findLength() const
{
    return this->_list.size();
}

bool List::getIsTemp() const
{
    return this->_isTemp;
}

void List::setIsTemp(bool isTemp)
{
    this->_isTemp = isTemp;
}

bool List::isPrintable() const
{
    return true;
}

std::string List::toString() const
{
    std::string list = "[";

    for (const auto elem : this->_list) {
        list += elem->toString();
        list += ", ";
    }
    list += "]";

    return list;
}

void List::append(Type* obj)
{
    this->_list.push_back(obj);
}

void List::insert(int index, Type* obj)
{
    if (index >= this->_list.size())
        this->_list.push_back(obj);
    else
        this->_list[index] = obj;
}

void List::extend(List obj)
{
    std::vector<Type*> anotherList = obj.getList();

    for (const auto elem : anotherList) {
        this->_list.push_back(elem);
    }
}

void List::reverse()
{
}

void List::remove(Type* obj)
{
}

void List::pop(int index)
{
}

void List::clear()
{
    this->_list.clear();
}

int List::index(Type* obj, int start, int end) const
{
    if (end == -1) end = this->_list.size() - 1;

    for (int i = start; i < end; i++)
    {
        if (this->_list[i] == obj)
            return i;
    }

    return end;
}

int List::count(Type* obj) const
{
    int count = 0;

    for (const auto elem : this->_list) {
        if (obj->toString() == this->toString())
            count++;
    }

    return count;
}

void List::sort()
{
}

std::vector<Type*> List::copy() const
{
    return this->_list;
}

std::vector<Type*> List::getList() const
{
    return this->_list;
}

Type* List::operator[](int n) const
{
    return this->_list[0];
}
