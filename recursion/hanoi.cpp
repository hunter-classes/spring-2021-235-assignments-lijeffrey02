#include <iostream>

void hanoi(int n, char src, char dst, char tmp){
	if(n == 1){
		std::cout << "Moved disk " << n << " from " << src << " to " << dst << "\n";
	}
	else{
		hanoi(n-1, src, tmp, dst);
		std::cout << "Moved disk " << n << " from " << src << " to " << dst << "\n";
		hanoi(n-1, tmp, dst, src);
	}
}

int main(){
	for(int i = 1; i <= 4; i++){
		std::cout << "\n" << i << " total disks\n";
		hanoi(i,'a','b','c');
	}
	return 0;
}