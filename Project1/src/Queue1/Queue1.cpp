#include "Queue1.h"
#include <iostream>

Queue1::Queue1(int nums) {
  initSize = nums;
  capacity = nums;
  numElements = 0;
  front = 0;
  back = 0;
  theQueue = new int [nums];
}

Queue1::~Queue1() {
  delete[] theQueue;
}

void Queue1::enqueue(int value) { 
  
  //if theQueue is full
  if(numElements == capacity){

    // create new Queue twice as big
    int* newQueue = new int[capacity*2];

    // copy all elements to new queue
    if(back<front){
      for(int i=0; i < numElements; ++i){
        newQueue[i - front] = theQueue[i];
      }
      for(int i=0; i <= back; ++i){
        newQueue[i + back] = theQueue[i];
      }
    }
    else{
      for(int i=0; i<numElements; i++){
        newQueue[i] = theQueue[i];
      }
    }

    // delete old queue
    delete[] theQueue;

    // point old stack pointer to new stack
    theQueue = newQueue;
  }
  //enq value
  theQueue[back] = value;

  //update pointer
  back = (back+1) % capacity;
  numElements++;
}

int Queue1::dequeue(){
  
  //if queue is using a quarter or less of its space 
  if ((numElements <= capacity/4) && (capacity/2 > initSize)){
    
    //create new queue with capacity/2
    int* newQueue  = new int[capacity/2];

    //copy all elements
    if(back<front){
      for(int i = front; i<capacity; ++i){
        newQueue[i - front] = theQueue[i];
      }
      for(int i = 0; i<= back; ++i){
        newQueue[i + back] = theQueue[i];
      }
    }
    else{
      for(int i = front; i <= back; ++i){
        newQueue[i - front] = theQueue[i];
      }
    }
    front = 0;
    back = numElements;
    delete[] theQueue;
    theQueue = newQueue;
  }
  //this is deq
  int value = theQueue[front];
  
  //update pointer
  front = (front + 1) % capacity;
  numElements--;
  return value;
}

bool Queue1::isEmpty() {
  if(numElements==0){
    return true;
  }
  else{
    return false;
  }
}

int Queue1::size() {
  return numElements;
}

