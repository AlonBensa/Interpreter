#pragma once
#include "Sequence.h"
#include <stack>

class Stack : public Sequence
{
private:
	std::stack<Type*> _stack;
	int findLength() const override;

public:
	Stack(std::stack<Type*> stack, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;

	bool empty() const;
	Type* top() const;
	void push(Type* elem);
	Type* pop();
};