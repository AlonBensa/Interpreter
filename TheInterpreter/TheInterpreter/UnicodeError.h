#pragma once
#include "InterpreterExceptions.h"

class UnicodeError : public InterpreterExceptions
{
public:
	UnicodeError(std::string moduleEncode,std::string byte,int position);
	virtual const char* what() const noexcept;
protected:
	std::string moduleEncode;
	std::string byte;
	int position;
};

