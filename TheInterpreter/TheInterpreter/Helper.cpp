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

