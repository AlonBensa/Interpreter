#pragma once
#include "InterpreterExceptions.h"

class ModuleNotFoundError : public InterpreterExceptions
{
public:
	ModuleNotFoundError(std::string moduleName);
	virtual const char* what() const noexcept;
private:
	std::string _moduleName;
};

