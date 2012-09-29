#include "Queue3.h"
#include <iostream>

Queue3::Queue3() {
  numElements = 0;
}

void Queue3::enqueue(int value) {
  theQueue.push_back(value);
  numElements++;
} 

int Queue3::dequeue() {
  int value = theQueue.front();
  theQueue.pop_front();
  numElements--;
  return value;  
}

bool Queue3::isEmpty(){
  if(numElements == 0){
    return true;
  }
  else{
    return false;
  }
}

int Queue3::size() {
  return numElements;
}
