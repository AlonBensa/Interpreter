#pragma once
#include "Type.h";
#include <unordered_map>;

class Operators
{
public:
	static Type* ExecuteOperator();
protected:
	std::string line;
};

