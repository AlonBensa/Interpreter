#include "List.h"

List::List(std::vector<Type*> list, bool isTemp) : Sequence(isTemp)
{
    this->_list = list;
}

int List::findLength() const
{
    return this->_list.size();
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

std::string List::getType() const
{
    return "List";
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
    std::vector<Type*> anotherList = obj.copy();

    for (const auto elem : anotherList) {
        this->_list.push_back(elem);
    }
}

void List::reverse()
{
    std::reverse(this->_list.begin(), this->_list.end());
}

void List::remove(Type* obj)
{
    auto it = std::find(this->_list.begin(), this->_list.end(), obj);

    if (it != this->_list.end()) {
        this->_list.erase(it);
    }
    else {
        throw ValueError("list", "remove");
    }
}

Type* List::pop(int index)
{
    index = Helper::getIndex(this->_list.size(), index);

    if (index >= this->_list.size() || index < 0) {
        throw IndexError("pop");
        return;
    }

    return this->_list[index];
}

void List::clear()
{
    this->_list.clear();
}

int List::index(Type* obj, int start, int end) const
{
    start = Helper::getIndex(this->_list.size(), start);
    end = Helper::getIndex(this->_list.size(), end);

    if ((start >= this->_list.size()) || (start < 0) || (end >= this->_list.size()) || (end < 0)) {
        throw ValueError("list", "index", obj->toString());
        return;
    }

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
    std::sort(this->_list.begin(), this->_list.end());
}

std::vector<Type*> List::copy() const
{
    return this->_list;
}

Type* List::operator[](int n) const
{
    if (n >= this->_list.size()) {
        throw IndexError("");
        return;
    }
    return this->_list[n];
}

Type* List::operator+(Type* other) const
{
    List* tmp = new List(this->_list, true);

    if (dynamic_cast<List*>(other)) {
        tmp->extend(*((List*)other));
        return tmp;
    }
    throw TypeError(new List(*this), other, "+", this->getType());
}

Type* List::operator*(Type* other) const
{
    List* tmp = new List(this->_list, true);

    if (dynamic_cast<Integer*>(other)) {
        for (int i = 0; i < std::atoi(((Integer*)other)->toString().c_str()); i++)
        {
            tmp->extend(*this);
        }
        return tmp;
    }
    throw TypeError(new List(*this), other, "*", this->getType());
}