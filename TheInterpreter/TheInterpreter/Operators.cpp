#include "Operators.h"

Type* Operators::executeOperator()
{
	return nullptr;
}

bool Operators::andOperator(bool firstSide, bool secondSide)
{
	return firstSide && secondSide;
}

bool Operators::orOperator(bool firstSide, bool secondSide)
{
	return firstSide || secondSide;
}

bool Operators::notOperator(bool condition)
{
	return !condition;
}

void Operators::AssignVar(std::unordered_map<std::string, Type*> variables, std::string varName, Type* varType)
{
}

bool Operators::inOperator(Type* firstType, Type* secondType)
{
	return false;
}

bool Operators::notInOperator(Type* firstType, Type* secondType)
{
	return false;
}

bool Operators::isOperator(Type* firstType, Type* secondType)
{
	return false;
}

bool Operators::isNotOperator(Type* firstType, Type* secondType)
{
	return false;
}

bool Operators::isComment()
{
	return false;
}
