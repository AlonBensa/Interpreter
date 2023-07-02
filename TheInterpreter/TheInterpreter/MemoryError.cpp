#include "MemoryError.h"

const char* MemoryError::what() const noexcept
{
	return "MemoryError: Out of memory";
}
