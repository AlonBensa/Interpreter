#include "RuntimeError.h"

const char* RuntimeError::what() const noexcept
{
	return "RuntimeError";
}
