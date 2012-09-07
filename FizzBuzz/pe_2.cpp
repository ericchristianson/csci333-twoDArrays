#include <iostream>

using std::cout;
using std::endl;


int fib(int a){
  if((a==0) || (a==1)){
    return a;
  } 
  else {
    return ((fib(a-1)) + (fib(a-2)));
  }
}




int main(){

  int sum = 2;

  for(int i=3; i<=40; i++){

    int fib = fib(i);

    if((fib%2==0) && (fib<4000000)){

      sum += fib;

    }
  }
  cout << "total: " << sum << endl;
  return 0;

}
