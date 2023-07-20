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
	if (!dynamic_cast<Sequence*>(secondType)) {
		std::string type = Helper::FindBasicType(secondType);
		std::vector<std::string> values;
		values.push_back(type);
		throw new Exception(25, values);
	}
	if (dynamic_cast<Stack*>(secondType)) {
		std::stack<Type*> copyStk = ((Stack*)secondType)->copy();
		while(!copyStk.empty()) {
			if (copyStk.top()->toString().compare(firstType->toString()) == 0) {
				return true;
			}
			copyStk.pop();
		}
		return false;
	}
	if (dynamic_cast<Queue*>(secondType)) {
		std::queue<Type*> copyQueue = ((Queue*)secondType)->copy();
		while (!copyQueue.empty()) {
			if (firstType->toString().compare(copyQueue.front()->toString()) == 0) {
				return true;
			}
			copyQueue.pop();
		}
		return false;
	}
	if (dynamic_cast<List*>(secondType)) {
		std::vector<Type*> copyList = ((List*)secondType)->copy();
		for (int i = 0;i < copyList.size(); i++) {
			if (copyList[i]->toString().compare(firstType->toString()) == 0) {
				return true;
			}
		}
		return false;
	}
	if (dynamic_cast<Dictionary*>(secondType)) {
		std::unordered_map<Type*, Type*> dictCopy = ((Dictionary*)secondType)->copy();
		for (const auto& pair : dictCopy) {
			std::string dictString = pair.first->toString() + pair.second->toString();
			if (dictString.compare(firstType->toString()) == 0) {
				return true;
			}
		}
		return false;
	}
	if (dynamic_cast<String*>(secondType)) {
		std::string stringCopy = ((String*)(secondType))->toString();
		if(stringCopy.compare(firstType->toString()) == 0) {
			return true;
		}
		return false;
	}
	if (dynamic_cast<Tuple*>(secondType)) {
		std::vector<Type*> tupleCopy = ((Tuple*)(secondType))->copy();
		for (int i = 0; i < tupleCopy.size(); i++) {
			if (tupleCopy[i]->toString().compare(firstType->toString()) == 0) {
				return true;
			}
		}
		return false;
	}
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
