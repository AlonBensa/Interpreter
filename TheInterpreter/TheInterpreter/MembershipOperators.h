#pragma once
#include "Operators.h"
class MembershipOperators : public Operators
{
public:
	static bool inOperator(Type* firstVar, Type* secondVar);
	static bool notInOperator(Type* firstVar, Type* secondVar);
};

