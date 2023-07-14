#pragma once
#include "Sequence.h"
#include <unordered_map>
#include "KeyError.h"

class Dictionary : public Sequence
{
private:
	std::unordered_map<Type*, Type*> _dictionary;
	int findLength() const override;

public:
	Dictionary(std::unordered_map<Type*, Type*> dictionary, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;

	void clear();
	std::unordered_map<Type*, Type*> copy() const;
	Type* get(Type* key) const;
	std::vector<std::pair<Type*, Type*>> items() const;
	std::vector<Type*> keys() const;
	std::vector<Type*> values() const;
	Type* pop(Type* key);
	std::pair<Type*, Type*> popItem();
	void update(Dictionary dict);
};