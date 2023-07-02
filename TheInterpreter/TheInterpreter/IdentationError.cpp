#include "IdentationError.h"

const char* IdentationError::what() const noexcept
{
	return "IndentationError: expected an indented block";
}
