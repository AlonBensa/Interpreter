#pragma once
#include "InterpreterExceptions.h"

class KeyError : public InterpreterExceptions
{
public:
	KeyError(std::string key, int amount);
	virtual const char* what() const noexcept;
private:
	std::string _key;
	int _amount;
};

