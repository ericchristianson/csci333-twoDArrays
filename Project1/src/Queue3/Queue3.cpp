#include "Queue3.h"
#include <iostream>

Queue3::Queue3() {
  numElements = 0
}

void Queue3::enqueue(int value) {
  Queue3.push_back(value);
  numElements++;
} 

int Queue3::dequeue() {
  int value = Queue3.front();
  Queue3.pop_front();
  numElements--;
  return value;  
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
