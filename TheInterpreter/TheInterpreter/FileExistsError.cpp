#include "FileExistsError.h"

FileExistsError::FileExistsError(std::string filename)
{
	this->_filename = filename;
}

const char* FileExistsError::what() const noexcept
{
	return ("FileExistsError: File exists: '" + this->_filename + "'").c_str();
}
