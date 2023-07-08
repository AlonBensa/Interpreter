#pragma once
#include "Type.h"

class Sequence : public Type
{
protected:
	int length;

public:
	Sequence(bool isTemp);

private:
	virtual int findLength() const = 0;
};