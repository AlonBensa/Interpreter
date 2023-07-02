#pragma once
#include "Sequence.h"
#include <stack>

class Stack : public Sequence
{
private:
	std::stack<Type*> _stack;
	bool _isTemp;
	int findLength() const override;

public:
	Stack(std::stack<Type*> stack, bool isTemp);
	bool getIsTemp() const override;
	void setIsTemp(bool isTemp) override;
	bool isPrintable() const override;
	std::string toString() const override;
	bool empty() const;
	int size() const;
	Type* top() const;
	void push();
	Type* pop();
};