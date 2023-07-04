#pragma once
#include "Operators.h"
class LogicalOperators : public Operators
{
public:
	static bool andOperator(bool firstSide, bool secondSide);
	static bool orOperator(bool firstSide, bool secondSide);
	static bool notOperator(bool condition);

};

