#pragma once
#include "Sequence.h"
#include <vector>

class Tuple : public Sequence
{
private:
	std::vector<Type*> _tuple;
	bool _isTemp;
	int findLength() const override;

public:
	Tuple(std::vector<Type*> tuple, bool isTemp);
	bool getIsTemp() const override;
	void setIsTemp(bool isTemp) override;
	bool isPrintable() const override;
	std::string toString() const override;
	int index(std::string varName) const;
	int count(std::string varName) const;
	Type* operator[](int n) const;
};