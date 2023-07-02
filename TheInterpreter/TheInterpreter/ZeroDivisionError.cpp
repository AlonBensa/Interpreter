#include "ZeroDivisionError.h"

const char* ZeroDivisionError::what() const noexcept
{
	return "ZeroDivisionError: division or modulo by zero";
}
