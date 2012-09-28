#include "Queue1.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  capacity = initialSize;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
 
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

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
