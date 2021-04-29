#include <iostream>
#include "stack.h"

int main(){
	Stack test;
	if(test.empty()){
		std::cout << "This should print(stack is empty)\n";
	}
	else std::cout << "error: stack didn't init empty\n";
	test.push(1);
	if(!test.empty()){
		std::cout << "This should print(stack is filled)\n";
	}
	else std::cout << "error: stack didn't push empty\n";
	test.push(1);
	test.push(2);
	test.push(3);
	test.push(5);
	test.push(7);
	std::cout << test.top() <<" == 7\n";
	test.pop();
	std::cout << test.top() <<" == 5\n";
}