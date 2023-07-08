#pragma once
#include "Type.h"
#include "ZeroDivisionError.h"
#include <cmath>

class Float : public Type
{
public:
	Float(float num, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;

	Float& exponentionEqual(const Type*& other);
	Float& floorDivisionEqual(const Type*& other);
	Float exponention(const Type* other);
	Float floorDivision(const Type* other);

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

