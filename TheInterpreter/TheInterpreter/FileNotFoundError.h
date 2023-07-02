#pragma once
#include "InterpreterExceptions.h"

class FileNotFoundError : public InterpreterExceptions
{
public:
	FileNotFoundError(std::string filename);
	virtual const char* what() const noexcept;

private:
	std::string _filename;
};

