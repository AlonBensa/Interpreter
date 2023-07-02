#include "KeyboardInterrupt.h"

const char* KeyboardInterrupt::what() const noexcept
{
	return "KeyboardInterrupt";
}
