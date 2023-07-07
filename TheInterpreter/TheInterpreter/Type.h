#pragma once
#include <string>
#include <format>
#include <algorithm>

class Type
{
private:
	bool _isTemp;

public:
	Type(bool isTemp);
	virtual bool getIsTemp() const;
	virtual void setIsTemp(bool isTemp);
	virtual bool isPrintable() const;
	virtual std::string toString() const = 0;
	virtual std::string getType() const = 0;
};