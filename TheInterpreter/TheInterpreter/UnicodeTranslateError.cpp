#include "UnicodeTranslateError.h"

const char* UnicodeTranslateError::what() const noexcept
{
	return ("UnicodeTranslateError: '" + UnicodeTranslateError::moduleEncode + "'codec can't translate character " + UnicodeTranslateError::byte + " in position " + std::to_string(UnicodeTranslateError::position) + " : character maps to <undefined>.").c_str();
}
