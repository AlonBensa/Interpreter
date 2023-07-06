#pragma once
#include <string>
#include <format>
#include <algorithm>

class Type
{
private:
	bool _isTemp;

public:
	virtual bool getIsTemp() const = 0;
	virtual void setIsTemp(bool isTemp) = 0;
	virtual bool isPrintable() const = 0;
	virtual std::string toString() const = 0;
};