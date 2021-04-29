#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

void print_vector(std::vector<int> test){
	for(int x:test){
		std::cout << x <<" ";
	}
	std::cout << "\n";
}

std::vector<int> merge(std::vector<int> left, std::vector<int> right){
	std::vector<int> final;
	while(left.size() > 0 && right.size() > 0){
		if(left.front() < right.front()){
			final.push_back(left.front());
			left.erase(left.begin());
		}
		else{
			final.push_back(right.front());
			right.erase(right.begin());
		}
	}
	if(!left.empty()){
        while(!left.empty()){
            final.push_back(left[0]);
            left.erase(left.begin());
        }
    }
    else {
        while(!right.empty()){
            final.push_back(right[0]);
            right.erase(right.begin());
        }
    }
	return final;
} 

std::vector<int> msort(std::vector<int> list){
	if(list.size() < 2){
		return list;
	}
	std::vector<int> right;
	std::vector<int> left;
	for(int i = 0; i < list.size(); i++){
		if(i < list.size()/2){
			left.push_back(list[i]);
		}
		else right.push_back(list[i]);
	}
	return merge(msort(left),msort(right));
}

int main(){
	srand(time(0));
	for(int i = 0; i < 10; i++){
		std::vector<int> test;
		for(int j = 0; j < rand()%40; j++){
			test.push_back(rand()%100);
		}
		print_vector(test);
		print_vector(msort(test));
		std::cout << "\n";
	}
	return 0;
}