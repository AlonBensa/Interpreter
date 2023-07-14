#pragma once
#include "Type.h"
#include <string>
#include <iostream>

class Boolean : public Type
{
public:
	Boolean(bool flag, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;

private:
	bool _flag;
};