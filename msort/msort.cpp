#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

//Cheuk Lam Cheung
//CSCI 235

std::vector<int> merge(std::vector<int> le, std::vector<int> ri){
    std::vector<int> m;
    //adds the smallest element from each vector until one of the vector is empty
    while (le.size() > 0 && ri.size() >0 ){
        if(le[0] < ri[0]){
            m.push_back(le[0]);
            le.erase(le.begin());
        }
        else {
            m.push_back(ri[0]);
            ri.erase(ri.begin());
        }
    } 
    //adds the rest of the elements from the remaining vector
    if (le.size() > 0){
        while(le.size()>0){
            m.push_back(le[0]);
            le.erase(le.begin());
        }
    }
    else {
        while(ri.size()>0){
            m.push_back(ri[0]);
            ri.erase(ri.begin());
        }
    }
    return m;
}

// Brian Hong
std::vector<int> msort(std::vector<int> arr){
  if(arr.size() < 2){
    return arr;
  }

  std::vector<int> left;
  std::vector<int> right;
  int mid = arr.size()/2;

  // filling left half
  for(int i = 0; i < mid; i++){
    left.push_back(arr[i]);
  }

  // filling right half
  for(int j = mid; j < arr.size(); j++){
    right.push_back(arr[j]);
  }

  arr = merge(msort(left), msort(right));
  return arr;
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