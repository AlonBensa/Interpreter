#pragma once
#include "Operators.h"
class CommentOperators : public Operators
{
public:
	commentOperators(std::string comment);
	static bool isComment();

private:
	std::string _comment;
};

