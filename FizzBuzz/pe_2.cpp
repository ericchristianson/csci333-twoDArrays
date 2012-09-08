#include <iostream>

using std::cout;
using std::endl;


int fib(int a){
  if((a==0) || (a==1)){
    return a;
  } 
  else {
    return (((fib(a-1)) + (fib(a-2))));
  }
}

int main(){

  int sum = 0;

  for(int i=0; i<=40; i++){

    int current = fib(i);

    if((current%2==0) && (current<4000000)){

      sum += current;

    }
  }
  cout << "total: " << sum << endl;
  return 0;
}



