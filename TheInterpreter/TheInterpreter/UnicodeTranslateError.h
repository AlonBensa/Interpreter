#pragma once
#include "UnicodeError.h"

class UnicodeTranslateError : public UnicodeError
{
public:
	virtual const char* what() const noexcept;
};

