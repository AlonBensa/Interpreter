#pragma once
#include "Sequence.h"
#include <vector>

class Tuple : public Sequence
{
private:
	std::vector<Type*> _tuple;
	int findLength() const override;

public:
	Tuple(std::vector<Type*> tuple, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;
	std::vector<Type*> copy();

	int index(std::string varName) const;
	int count(std::string varName) const;
	Type* operator[](int n) const;
};