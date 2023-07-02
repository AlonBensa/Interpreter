#pragma once
#include "Type.h"
class Float : public Type
{
public:
	Float(float num, bool isTemp);
	bool getIsTemp() const override;
	void setIsTemp(bool isTemp) override;
	bool isPrintable() const override;
	std::string toString() const override;

private:
	float _num;
	bool _isTemp;
};

