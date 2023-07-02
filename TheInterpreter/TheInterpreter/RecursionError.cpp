#include "RecursionError.h"

const char* RecursionError::what() const noexcept
{
	return "RecursionError: The maximum recursion depth has been exceeded";
}
