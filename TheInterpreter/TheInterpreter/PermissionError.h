#pragma once
#include "InterpreterExceptions.h"

class PermissionError : public InterpreterExceptions
{
public:
	PermissionError(std::string pathFile);
	virtual const char* what() const noexcept;
private:
	std::string _pathFile;
};

