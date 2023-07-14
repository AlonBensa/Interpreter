#pragma once
#include "Type.h"
#include "Integer.h"
#include "InterpreterExceptions.h"
#include "ZeroDivisionError.h"
#include "TypeError.h"
#include <cmath>

class Float : public Type
{
public:
	Float(float num, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;

	Float& exponentionEqual(Type*& other);
	Float& floorDivisionEqual(Type*& other);
	Float exponention(Type* other);
	Float floorDivision(Type* other);

	Float& operator=(const Type*& other);
	Float& operator+=(const Type*& other);
	Float& operator-=(const Type*& other);
	Float& operator*=(const Type*& other);
	Float& operator/=(const Type*& other);
	Float& operator%=(const Type*& other);
	Float& operator++(int);
	Float& operator--(int);
	Float operator+(const Type*& other) const;
	Float operator-(const Type*& other) const;
	Float operator*(const Type*& other) const;
	Float operator/(const Type*& other) const;
	Float operator%(const Type*& other) const;
	bool operator==(const Type*& other) const;
	bool operator!=(const Type*& other) const;
	bool operator>(const Type*& other) const;
	bool operator<(const Type*& other) const;
	bool operator>=(const Type*& other) const;
	bool operator<=(const Type*& other) const;

private:
	float _num;
};

