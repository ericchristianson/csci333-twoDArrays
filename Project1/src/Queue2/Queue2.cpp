#include "Queue2.h"
#include <iostream>

Node::Node(int n){
  value = n;
  next = 0;
}

int Node::getValue(){
  return value;
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
 
  Node* curr = new Node(value);
  curr-> setNext(0);
  if(numElements == 0) {
    front = curr;
    back = curr;
  }
  else{
    back-> setNext(curr);
    back = curr;
  }
  numElements++;
}

int Queue2::dequeue() {
  Node* curr = front;
  int value = curr->getValue();
  front = curr->getNext();
  delete curr;
  numElements--;
  return value;  
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
