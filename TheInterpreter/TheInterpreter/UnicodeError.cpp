#include "UnicodeError.h"

UnicodeError::UnicodeError(std::string moduleEncode,std::string byte,int position)
{
	this->moduleEncode = moduleEncode;
	this->byte = byte;
	this->position = position;
}

