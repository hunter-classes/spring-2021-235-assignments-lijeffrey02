#include "queue.h"

Queue::Queue(){
	length = 0;
}
	Queue::~Queue(){
	while(!empty()){
		dequeue();
	}
}
	bool Queue::empty(){
		return size() == 0;
}
	int Queue::size(){
	return length;
}
	void Queue::enqueue(int input){
	queue.push_back(input);
	length++;
}
	void Queue::dequeue(){
		if(length != 0){
		queue.erase(queue.begin());
		length--;
	}
}
	int Queue::front(){
	return queue[0];
}
