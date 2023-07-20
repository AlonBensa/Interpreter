#pragma once
#include "Sequence.h"
#include <queue>

class Queue : public Sequence
{
private:
	std::queue<Type*> _queue;
	int findLength() const override;

public:
	Queue(std::queue<Type*> queue, bool isTemp);
	std::string toString() const override;
	std::string getType() const override;
	std::queue<Type*> copy();

	void enqueue(Type* elem);
	Type* dequeue();
	Type* front() const;
	Type* rear() const;
};