#include "FileNotFoundError.h"

FileNotFoundError::FileNotFoundError(std::string filename)
{
	this->_filename = filename;
}

const char* FileNotFoundError::what() const noexcept
{
	return ("FileNotFoundError: No such file or directory: '" + this->_filename + "'").c_str();
}
