#include "stack.h"
Stack::Stack(){
	size = 0;
}

Stack::~Stack(){
	while(size > 0){
		pop();
	}
}

bool Stack::empty(){
	return size == 0;
}

int Stack::top(){
	return stack[size-1];
}

void Stack::push(int input){
	stack.push_back(input);
	size++;
}

void Stack::pop(){
	if(size != 0){
		stack.pop_back();
		size--;
	}
}
