#include "InterpreterExceptions.h"

class TypeError : InterpreterExceptions
{
public:
	TypeError(Type* firstType, Type* secondType, std::string typesOperator, std::string objName);
	TypeError(std::string objName,std::string functionName,int amountOfArgumentGiven, int amountOfArgumentNeeded);
	TypeError(std::string functionName, std::string typeGiven, std::string typeNeeded, std::string argNum);
	TypeError(std::string wrongType);
	virtual const char* what() const noexcept;
private:
	std::string _typesOperator;
	std::string _typeGiven;
	std::string _typeNeeded;
	Type* _firstType;
	Type* _secondType;
	std::string _functionName;
	std::string _objName;
	int _amountOfArgumentGiven;
	int _amountOfArgumentNeeded;
	std::string _argNum;
	std::string _wrongType;
};

