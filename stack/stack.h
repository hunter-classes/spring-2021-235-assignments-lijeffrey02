#pragma once
#include <vector>
#include <string>

class Stack{
	public:
		Stack();
		~Stack();
		bool empty();
		void push(int);
		void pop();
		int top();
		std::string toString();
	private:
		std::vector<int> stack;
		int size;
};