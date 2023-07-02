#pragma once
#include "Type.h"
class Void : public Type
{
public:
	Void();
	bool getIsTemp() const override;
	void setIsTemp(bool isTemp) override;
	bool isPrintable() const override;
	std::string toString() const override;
};

