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
TypeError::TypeError(std::string wrongType)
{
	this->_wrongType = wrongType;
}
const char* TypeError::what() const noexcept 
{
	if (this->_firstType != nullptr) 
	{
		if (this->_typesOperator.compare("*")) 
		{
			if (dynamic_cast<Sequence*>(this->_firstType)) 
			{
				return ("TypeError: can't multiply sequence by non-int of type " + this->_secondType->getType()).c_str();
			}
			else 
			{
				return ("TypeError: can't multiply sequence by non-int of type " + this->_firstType->getType()).c_str();
			}
		}
		if (this->_typesOperator.compare("+")) 
		{
			if (dynamic_cast<Sequence*>(this->_firstType)) {
				return ("TypeError: can only concatenate" + this->_objName + "(not '" + this->_secondType->getType() + "') to " + this->_objName).c_str();
			}
			else {
				return ("TypeError: can only concatenate" + this->_objName + "(not '" + this->_firstType->getType() + "') to " + this->_objName).c_str();
			}
		}
		return ("TypeError: unsupported operand type(s) for " + this->_typesOperator + ": " + this->_firstType->getType() + "' and '" + this->_secondType->getType() + "'").c_str();
	}


	if (!this->_objName.empty()) 
	{
		return ("TypeError: " + this->_objName + "." + this->_functionName + "() takes exactly " + std::to_string(this->_amountOfArgumentNeeded) + "(" + std::to_string(this->_amountOfArgumentGiven) + "given)").c_str();
	}
	if (!this->_typeGiven.empty()) 
	{
		return ("TypeError: " + this->_functionName + " " + this->_argNum + "arg must be " + this->_typeNeeded + "not " + this->_typeGiven).c_str();
	}
	if (!this->_wrongType.empty()) 
	{
		return ("TypeError: argument of type '" + this->_wrongType + "' is not iterable").c_str();
	}
}