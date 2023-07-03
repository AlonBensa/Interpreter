#pragma once
#include "Operators.h"
class ArithmeticOperators : public Operators
{
	Type* Add(Type* type,Type* type2);
	Type* Substraction(Type* type, Type* type2);
	Type* Multiplication(Type* type, Type* type2);
	Type* Division(Type* type, Type* type2);
	Type* Modulus(Type* type, Type* type2);
	Type* Exponentiation(Type* type, Type* type2);
	Type* FloorDivision(Type* type, Type* type2);
};

