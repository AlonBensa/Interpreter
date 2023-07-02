#include "UnicodeEncodeError.h"

const char* UnicodeEncodeError::what() const noexcept
{
	return ("UnicodeEncodeError: '" + UnicodeEncodeError::moduleEncode + "' codec can't encode characters  " + UnicodeEncodeError::byte + " in position " + std::to_string(UnicodeEncodeError::position)).c_str();
}
