#include "UnicodeDecodeError.h"

const char* UnicodeDecodeError::what() const noexcept
{
	return ("UnicodeDecodeError: '" + UnicodeDecodeError::moduleEncode  + "' codec can't decode byte " + UnicodeDecodeError::byte +  " in position " + std::to_string(UnicodeDecodeError::position) + " invalid continuation byte").c_str();
}
