#include "SyntaxError.h"

SyntaxError::SyntaxError(bool allocateMemory)
{
	this->_allocateMemory = allocateMemory;
}

const char* SyntaxError::what() const noexcept
{
	if (this->_allocateMemory) 
	{
		return "SyntaxError: 'literal' is an illegal expression for augmented assignment";
	}
	return "SyntaxError: Invalid syntax.";
}
