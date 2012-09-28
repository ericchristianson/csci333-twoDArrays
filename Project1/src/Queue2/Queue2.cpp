#include "Queue2.h"
#include <iostream>



Node::Node(int n){
  int num = n;
  next = 0;
}

int Node::getValue(){
  return num;
}

void Node::setNext(Node* n){
  next = n;
}

Node* Node::getNext(){
  return next;
}

//constructor
Queue2::Queue2() {
  front = 0;
  back = 0;
  numElements = 0;
}

//destructor
Queue2::~Queue2() {
  while(numElements > 0) {
    dequeue();
  }
}

void Queue2::enqueue(int value) {
 
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

int Queue2::dequeue() {
  
}

bool Queue2::isEmpty() {
  if(numElements == 0){
    return true;
  }
  else{
    return false;
  }
}

int Queue2::size() {
  return numElements;
}
