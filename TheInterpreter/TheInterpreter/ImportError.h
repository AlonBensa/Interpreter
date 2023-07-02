#pragma once
#include "InterpreterExceptions.h"

class ImportError : public InterpreterExceptions
{
public:
	ImportError(std::string moduleName);
	virtual const char* what() const noexcept;
private:
	std::string _moduleName;
};

