#pragma once
#include "Operators.h"
class IdentityOperators : public Operators
{
public:
	static bool isOperator(Type* firstVar, Type* secondVar);
	static bool isNotOperator(Type* firstVar, Type* secondVar);
};

