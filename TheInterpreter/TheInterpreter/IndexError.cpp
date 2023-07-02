#include "IndexError.h"

const char* IndexError::what() const noexcept
{
	return "IndexError: list index out of range";
}
