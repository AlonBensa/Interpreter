#pragma once
#include "Operators.h"
class ArithmeticOperators : public Operators
{
public:
	static Type* add(Type* firstVar,Type* secondVar);
	static Type* substraction(Type* firstVar, Type* secondVar);
	static Type* multiplication(Type* firstVar, Type* secondVar);
	static Type* division(Type* firstVar, Type* secondVar);
	static Type* modulus(Type* firstVar, Type* secondVar);
	static Type* exponentiation(Type* firstVar, Type* secondVar);
	static Type* floorDivision(Type* firstVar, Type* secondVar);
};

