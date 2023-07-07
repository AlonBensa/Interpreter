#pragma once
#include <string>
#include "Type.h"
#include "Sequence.h"
#include "Stack.h"
#include "Queue.h"
#include "List.h"
#include "Tuple.h"
#include "Dictionary.h"
#include "String.h"

class Helper
{
public:
	static bool isInt(std::string str);
	static int getIndex(int length,int index);
};

