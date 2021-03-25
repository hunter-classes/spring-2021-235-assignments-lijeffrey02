#include <iostream>
#include "queue.h"

int main(){
	Queue test;
	if(test.empty()){
		std::cout << "This should print(queue is empty)\n";
	}
	else std::cout << "error: queue didn't init empty\n";
	test.enqueue(1);
	if(!test.empty()){
		std::cout << "This should print(queue is filled)\n";
	}
	else std::cout << "error: queue didn't push empty\n";
	test.enqueue(2);
	test.enqueue(3);
	test.enqueue(5);
	test.enqueue(7);
	std::cout << test.front() <<" == 1\n";
	test.dequeue();
	std::cout << test.front() <<" == 2\n";
}