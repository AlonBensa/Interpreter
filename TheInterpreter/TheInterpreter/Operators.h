#pragma once
#include "Type.h";
#include <unordered_map>;

class Operators
{
public:
	static Type* executeOperator();
	static bool andOperator(bool firstSide, bool secondSide);
	static bool orOperator(bool firstSide, bool secondSide);
	static bool notOperator(bool condition);
	static void AssignVar(std::unordered_map<std::string, Type*> variables, std::string varName, Type* varType);
	static bool inOperator(Type* firstType, Type* secondType);
	static bool notInOperator(Type* firstType, Type* secondType);
	static bool isOperator(Type* firstType, Type* secondType);
	static bool isNotOperator(Type* firstType, Type* secondType);
	static bool isComment();
private:
	std::string _line;
	std::string _comment;
};

