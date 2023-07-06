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
	variables.insert({varName, varType});
}

bool Operators::inOperator(Type* firstType, Type* secondType)
{
	
}

bool Operators::notInOperator(Type* firstType, Type* secondType)
{
	return !inOperator(firstType, secondType);
}

bool Operators::isOperator(Type* firstType, Type* secondType)
{
	bool isSequence1 = dynamic_cast<Sequence*>(firstType);
	bool isSequence2 = dynamic_cast<Sequence*>(secondType);
	if (isSequence1 && isSequence2)
	{
		if (firstType == secondType) {
			return true;
		}
	}
	if (!isSequence1 && !isSequence2) {
		if (firstType->toString().compare(secondType->toString()) == 0) {
			return true;
		}
	}
	return false;
}

bool Operators::isNotOperator(Type* firstType, Type* secondType)
{
	return !isOperator(firstType, secondType);
}

bool Operators::isComment()
{
	return false;
}
