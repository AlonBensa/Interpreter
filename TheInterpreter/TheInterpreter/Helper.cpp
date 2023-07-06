#include "Helper.h"

bool Helper::isInt(std::string str)
{
    try {
        size_t pos = 0;
        std::stoi(str, &pos);
        return pos == str.length(); 
    }
    catch (...) {
        return false; 
    }
}

int Helper::getIndex(int length, int index)
{
	if (index > 0) {
		return index;
	}
	return length + index;
}

int Helper::FindSizeArray(Type* type) 
{
    int count = 0;
    while (dynamic_cast<Sequence*>(type)) 
    {
       
    }
}

Type* Helper::FindSequence(Sequence* seq)
{
    if (dynamic_cast<Stack*>(seq)) {
        return ((Stack*)seq)->pop();
    }
    if (dynamic_cast<Queue*>(seq)) {
        return ((Queue*)seq)->dequeue();
    }
    if (dynamic_cast<List*>(seq)) {
        return ((List*)seq)->pop();
    }
    if (dynamic_cast<Dictionary*>(seq)) {
        return ((Dictionary*)(seq))->popItem().first;
    }
    if (dynamic_cast<String*>(seq)) {
        return nullptr;
    }
    if (dynamic_cast<Tuple*>(seq)) {
        return ((Tuple*)(seq))[0];
    }
}
