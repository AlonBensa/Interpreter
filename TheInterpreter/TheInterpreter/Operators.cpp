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
		Stack* copyStk = ((Stack*)secondType)->copy();
		while(!copyStk->empty()) {
			if (firstType->toString().compare(copyStk->pop()->toString()) == 0) {
				return true;
			}
		}
		return false;
	}
	if (dynamic_cast<Queue*>(secondType)) {
		Queue* copyQueue = ((Queue*)secondType)->copy();
		while (copyQueue->count() != 0) {
			if (firstType->toString().compare(copyQueue->dequeue()->toString()) == 0) {
				return true;
			}
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
		Dictionary* dictCopy = ((Dictionary*)secondType)->copy();
		std::pair<Type*, Type*> pair1;
		while (dictCopy->size() != 0) {
			pair1 = dictCopy->popItem();
			if ((pair1.first->toString() + pair1.second->toString()).compare(firstType->toString()) == 0) {
				return true;
			}
		}
		return false;
	}
	if (dynamic_cast<String*>(secondType)) {
		String* stringCopy = ((String*)(secondType))->copy();
		if (stringCopy->toString().compare(firstType->toString()) == 0) {
			return true;
		}
		return false;
	}
	if (dynamic_cast<Tuple*>(secondType)) {
		Tuple* tupleCopy = ((Tuple*)(secondType))->copy();
		for (int i = 0; i < tupleCopy->size(); i++) {
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
