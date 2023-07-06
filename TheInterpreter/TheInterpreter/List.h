#pragma once
#include "Sequence.h"
#include "ValueError.h"
#include "IndexError.h"
#include "Helper.h"
#include <vector>

class List : public Sequence
{
private:
	std::vector<Type*> _list;
	bool _isTemp;
	int findLength() const override;

public:
	List(std::vector<Type*> list, bool isTemp);
	bool getIsTemp() const override;
	void setIsTemp(bool isTemp) override;
	bool isPrintable() const override;
	std::string toString() const override;
	void append(Type* obj);
	void insert(int index, Type* obj);
	void extend(List obj);
	void reverse();
	void remove(Type* obj);
	Type* pop(int index = -1);
	void clear();
	int index(Type* obj, int start = 0, int end = -1) const;
	int count(Type* obj) const;
	void sort();
	std::vector<Type*> copy() const;

	Type* operator[](int n) const;
	Type* operator+(const Type* other) const;
	Type* operator*(const Type* other) const;
};

