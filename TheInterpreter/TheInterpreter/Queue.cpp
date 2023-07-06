#include "Queue.h"

Queue::Queue(std::queue<Type*> queue, bool isTemp)
{
    this->_queue = queue;
    this->_isTemp = isTemp;
}

int Queue::findLength() const
{
    return this->_queue.size();
}

bool Queue::getIsTemp() const
{
    return this->_isTemp;
}

void Queue::setIsTemp(bool isTemp)
{
    this->_isTemp = isTemp;
}

bool Queue::isPrintable() const
{
    return true;
}

std::string Queue::toString() const
{
    std::queue<Type*> tmp = this->_queue;
    std::string str = "-> ";

    while (!tmp.empty()) {
        str += tmp.front()->toString() + " -> ";
        tmp.pop();
    }

    str += " ->";

    return str;
}

void Queue::enqueue(Type* elem)
{
    this->_queue.push(elem);
}

Type* Queue::dequeue()
{
    Type* tmp = this->_queue.front();
    this->_queue.pop();
    return tmp;
}

Type* Queue::front() const
{
    return this->_queue.front();
}

Type* Queue::rear() const
{
    return this->_queue.back();
}
