#include "Queue3.h"
#include <iostream>

Queue3::Queue3() {
  numElements = 0
}

void Queue3::enqueue(int value) {
 
  //if theStack is full
  if(theStack[capacity] == theStack[top]){

    // create new stack twice as big
    newStack = new int[capacity*2];


    // copy all elements to new stack
    for(int i=0; i<=capacity; ++i){
      newStack[i] = theStack[i];
    }

    // delete old stack
    delete[] theStack;
    // point old stack pointer to new stack
    theStack = newStack;
  }
  theStack[top] = value;
  top++;

  //test
  //std::cout << top << std::endl;

}

int Queue3::dequeue() {
  
}

bool Queue3::isEmpty(){
  if(numElements == 0){
    return true:
  }
  else{
    return false;
  }
}

int Stack::size() {
  return numElements;
}
