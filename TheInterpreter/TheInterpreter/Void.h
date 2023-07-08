#pragma once
#include "Type.h"

class Void : public Type
{
public:
	Void(bool isTemp);
	bool isPrintable() const override;
	std::string toString() const override;
	std::string getType() const override;
};

