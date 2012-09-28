#ifndef __QUEUE2_H__
#define __QUEUE2_H__


#include <list>

class Queue2 {

 private:
  int numElements;
  <int> theQueue;

 public:
  Queue2();
  ~Queue2(); //destructor
  void enqueue(int n);
  int dequeue();
  int size();
  bool isEmpty;

};


#endif
