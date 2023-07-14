#pragma once
#include "Sequence.h"
#include "Integer.h"
#include "ValueError.h"
#include "IndexError.h"
#include "TypeError.h"
#include "Helper.h"
#include <vector>

class List : public Sequence
{
private:
	std::vector<Type*> _list;
	int findLength() const override;

public:
	List(std::vector<Type*> list, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;

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
	Type* operator+(Type* other) const;
	Type* operator*(Type* other) const;
};

