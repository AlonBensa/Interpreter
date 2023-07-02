#include "OverflowError.h"

const char* OverflowError::what() const noexcept
{
	return "OverflowError:Python int too large";
}
