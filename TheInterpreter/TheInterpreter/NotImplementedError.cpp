#include "NotImplementedError.h"

const char* NotImplementedError::what() const noexcept
{
	return "NotImplementedError: This feature or method is not implemented yet";
}
