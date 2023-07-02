#pragma once
#include "Type.h"

class Sequence : public Type
{
protected:
	int length;

private:
	virtual int findLength() const = 0;
};