#pragma once
#include "Operators.h"
class ComparisionOperators :public Operators
{
public:
	static bool equal(Type* firstVar, Type* secondVar);
	static bool notEqual(Type* firstVar, Type* secondVar);
	static bool greaterThan(Type* firstVar, Type* secondVar);
	static bool lessThan(Type* firstVar, Type* secondVar);
	static bool greatOrEqual(Type* firstVar, Type* secondVar);
	static bool lessOrEqual(Type* firstVar, Type* secondVar);
};

