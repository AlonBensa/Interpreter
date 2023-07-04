#pragma once
#include "Operators.h"
class AssignmentOperators : public Operators
{
public:
	static void assignVar(std::unordered_map<std::string, Type*> variables, std::string varName, Type* data);
	static void plusEqual(Type* firstVar, Type* secondVar);
	static void minusEqual(Type* firstVar, Type* secondVar);
	static void multiEqual(Type* firstVar, Type* secondVar);
	static void divisionEqual(Type* firstVar, Type* secondVar);
	static void moduleEqual(Type* firstVar, Type* secondVar);
	static void floorEqual(Type* firstVar, Type* secondVar);
	static void powerEqual(Type* firstVar, Type* secondVar);
	static void rightBitEqual(int firstVar, int secondVar);
	static void leftBitEqual(int firstVar, int secondVar);
	static void orBitwiseEqual(int firstVar, int secondVar);
	static void andBitwiseEqual(int firstVar, int secondVar);
};

