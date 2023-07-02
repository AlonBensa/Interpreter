#pragma once
#include "InterpreterExceptions.h"

class FileExistsError : public InterpreterExceptions
{
public:
	FileExistsError(std::string filename);
	virtual const char* what() const noexcept;
private:
	std::string _filename;
};

