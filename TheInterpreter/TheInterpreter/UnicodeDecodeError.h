#pragma once
#include "UnicodeError.h"

class UnicodeDecodeError : public UnicodeError
{
public:
	virtual const char* what() const noexcept;
};

