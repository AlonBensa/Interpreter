#include "SyntaxError.h"

const char* SyntaxError::what() const noexcept
{
	return "SyntaxError: Invalid syntax.";
}
