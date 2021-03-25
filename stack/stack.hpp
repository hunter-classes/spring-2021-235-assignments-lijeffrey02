#pragma once
#include <vector>
#include <string>

class stack{
public:
	bool empty();
	int size();
	void push(int);
	void pop();
	int top();
	std::toString();
private:
	std::vector<int> stack;
	int size;
}