#include <stack.hpp>

bool stack::empty(){
	return size == 0;
}

int size(){
	return size;
}

int stack::top(){
	return stack[size-1];
}

void stack::push(int input){
	stack.pushback(input);
	size++;
}

bool stack::pop(){
	if(size == 0){
		return false;
	}
	stack.pop_back();
	size--;
	return true;
}

std::string stack::toString(){
	std::string ans = "[";
	for(int i = 0; i < size; i++){
		ans += stack[i] + ", ";
	}
	return ans + "]";
}
