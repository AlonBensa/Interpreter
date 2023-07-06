#pragma once
#include "Sequence.h"
#include <queue>

class Queue : public Sequence
{
private:
	std::queue<Type*> _queue;
	bool _isTemp;
	int findLength() const override;

public:
	Queue(std::queue<Type*> queue, bool isTemp);
	bool getIsTemp() const override;
	void setIsTemp(bool isTemp) override;
	bool isPrintable() const override;
	std::string toString() const override;
	void enqueue(Type* elem);
	Type* dequeue();
	Type* front() const;
	Type* rear() const;
};