#include <iostream>

int fact(int n){
  if (n == 0){
    return 1;
  } else {
    return n * fact(n-1);
  }
}

int fib(int n){

  if (n <2){
    return 1;
  } else {
  return fib(n-1) + fib(n-2);
  }
}

int fib_iter(int n){
    int one = 1;
    int two = 1;
    int three = 1;
    for(int i = 1; i < n; i++){
      three = one + two;
      one = two;
      two = three;
    }
    return three;
}

int stepPerms(int n){
  if(n < 1){
    return 0;
  }
  if(n == 1){
    return 1;
  }
  if(n == 2){
    return 2;
  }
  if(n == 3){
    return 4;
  }
  return stepPerms(n-1) + stepPerms(n-2) + stepPerms(n-3);
}

int main()
{
  for(int i = 0; i <= 10; i++){
    std::cout << i << ":" << fib_iter(i) << "\n";
  }
  std::cout << "StepPerms\n";
  for(int i = 1; i <= 10; i++){
    std::cout << i << ":" << stepPerms(i) << "\n";
  }
  return 0;
}

