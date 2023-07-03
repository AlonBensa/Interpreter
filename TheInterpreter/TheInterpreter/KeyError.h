#pragma once
#include "InterpreterExceptions.h"

class KeyError : public InterpreterExceptions
{
public:
	KeyError(std::string key, bool isEmpty, std::string functionName);
	virtual const char* what() const noexcept;
private:
	std::string _key;
	bool _isEmpty;
	std::string _functionName;
};

