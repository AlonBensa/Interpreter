#pragma once
#include "Operators.h"
class BitwiseOperators : public Operators
{
public:
	static int andBit(int firstVar, int secondVar);
	static int orBit(int firstVar, int secondVar);
	static int xorBit(int firstVar, int secondVar);
	static int notBit(int firstVar, int secondVar);
	static int leftBit(int firstVar, int secondVar);
	static int rightBit(int firstVar, int secondVar);
};

