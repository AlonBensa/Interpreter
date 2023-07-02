#pragma once
#include "UnicodeError.h"

class UnicodeEncodeError : public UnicodeError
{
public:
	virtual const char* what() const noexcept;
};

