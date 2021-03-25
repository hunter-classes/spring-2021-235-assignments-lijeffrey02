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
	private:
		std::vector<int> stack;
		int size;
};