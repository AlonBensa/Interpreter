#pragma once
#include "Type.h"
class Integer : public Type
{
public:
	Integer(int num, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;

private:
	int _num;
};

