#pragma once
#include "Type.h"
class Integer : public Type
{
public:
	Integer(int num, bool isTemp);
	bool getIsTemp() const override;
	void setIsTemp(bool isTemp) override;
	bool isPrintable() const override;
	std::string toString() const override;

private:
	int _num;
	bool _isTemp;
};

