#pragma once
#include "Type.h"
class Float : public Type
{
public:
	Float(float num, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;

private:
	float _num;
};

