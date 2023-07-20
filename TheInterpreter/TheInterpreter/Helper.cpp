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
std::string Helper::FindBasicType(Type* type)
{
    if (dynamic_cast<Float*>(type)) {
        return "float";
    }
    if (dynamic_cast<Integer*>(type)) {
        return "integer";
    }
    if (dynamic_cast<Boolean*>(type)) {
        return "boolean";
    }
    if (dynamic_cast<Void*>(type)) {
        return "void";
    }
    return "";
}
