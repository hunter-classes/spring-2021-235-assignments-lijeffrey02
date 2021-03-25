#include <iostream>
#include "stack.h"

int main(){
	Stack test;
	test.push(1);
	test.push(2);
	test.push(3);
	std::cout << test.toString() << "\n" << test.top() <<"\n";
}