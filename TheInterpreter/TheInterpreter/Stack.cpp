#include "Stack.h"

Stack::Stack(std::stack<Type*> stack, bool isTemp)
{
    this->_stack = stack;
    this->_isTemp = isTemp;
}

int Stack::findLength() const
{
    return this->_stack.size();
}

bool Stack::getIsTemp() const
{
    return this->_isTemp;
}

void Stack::setIsTemp(bool isTemp)
{
    this->_isTemp = isTemp;
}

bool Stack::isPrintable() const
{
    return true;
}

std::string Stack::toString() const
{
    std::stack<Type*> tmp = this->_stack;
    std::string str = "";

    while (!tmp.empty()) {
        str += tmp.top()->toString() + " <- ";
        tmp.pop();
    }

    str += " ->";

    return str;
}

bool Stack::empty() const
{
    return this->_stack.empty();
}

Type* Stack::top() const
{
    return this->_stack.top();
}

void Stack::push(Type* elem)
{
    this->_stack.push(elem);
}

Type* Stack::pop()
{
    Type* tmp = this->_stack.top();
    this->_stack.pop();
    return tmp;
}
