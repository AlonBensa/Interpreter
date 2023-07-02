#pragma once
#include "Type.h"
#include <string>
#include <iostream>

class Boolean : public Type
{
public:
	Boolean(bool flag, bool isTemp);
	bool getIsTemp() const override;
	void setIsTemp(bool isTemp) override;
	bool isPrintable() const override;
	std::string toString() const override;

private:
	bool _flag;
	bool _isTemp;
};