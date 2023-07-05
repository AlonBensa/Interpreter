#include "TypeError.h"

TypeError::TypeError(Type* firstType,Type* secondType, std::string typesOperator, std::string objName)
{
	this->_objName = objName;
	this->_firstType = firstType;
	this->_secondType = secondType;
	this->_typesOperator = typesOperator;
}

TypeError::TypeError(std::string objName, std::string functionName, int amountOfArgumentGiven, int amountOfArgumentNeeded)
{
	this->_objName = objName;
	this->_functionName = functionName;
	this->_amountOfArgumentGiven = amountOfArgumentGiven;
	this->_amountOfArgumentNeeded = amountOfArgumentNeeded;
}

TypeError::TypeError(std::string functionName, std::string typeGiven, std::string typeNeeded, std::string argNum)
{
	this->_functionName = functionName;
	this->_typeGiven = typeGiven;
	this->_typeNeeded = typeNeeded;
}
const char* TypeError::what() const noexcept 
{
	if (this->_firstType != nullptr) 
	{
		if (this->_typesOperator.compare("multiply")) 
		{
			if (dynamic_cast<Sequence*>(this->_firstType)) 
			{
				return ("TypeError: can't multiply sequence by non-int of type " + this->_secondType->toString()).c_str();
			}
			else 
			{
				return ("TypeError: can't multiply sequence by non-int of type " + this->_firstType->toString()).c_str();
			}
		}
		if (this->_typesOperator.compare("plus")) 
		{
			return ("TypeError: can only concatenate" + this->_objName + "(not 'int') to " + this->_objName).c_str();
		}
		return ("TypeError: unsupported operand type(s) for &: '" + this->_firstType->toString() + "' and '" + this->_secondType->toString() + "'").c_str();
	}


	if (!this->_objName.empty()) 
	{
		return ("TypeError: " + this->_objName + "." + this->_functionName + "() takes exactly " + std::to_string(this->_amountOfArgumentNeeded) + "(" + std::to_string(this->_amountOfArgumentGiven) + "given)").c_str();
	}
	if (!this->_typeGiven.empty()) 
	{
		return ("TypeError: " + this->_functionName + " " + this->_argNum + "arg must be " + this->_typeNeeded + "not " + this->_typeGiven).c_str();
	}
}