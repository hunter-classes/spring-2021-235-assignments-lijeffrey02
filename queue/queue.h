#pragma once
#include <vector>

class Queue{
public:
	Queue();
	~Queue();
	bool empty();
	int size();
	int front();
	void enqueue(int);
	void dequeue();
private:
	std::vector<int> queue;
	int length;
};