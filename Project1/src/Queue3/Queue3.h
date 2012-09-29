#ifndef __QUEUE3_H__
#define __QUEUE3_H__

#include <iostream>
#include <list>

class Queue3 {

 private:
  int numElements;
  std::list<int> theQueue;

 public:
  Queue3();
  void enqueue(int n);
  int dequeue();
  int size();
  bool isEmpty();

};


#endif
