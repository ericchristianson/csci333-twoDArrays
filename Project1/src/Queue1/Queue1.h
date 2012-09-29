#ifndef __QUEUE1_H__
#define __QUEUE1_H__

class Queue1 {

 private:
  int* theQueue;
  int* newStack;
  int front;
  int back;
  int numElements;
  int capacity;
  int initSize; //initial size; not capacity

 public:
  Queue1(int stackSize);
  ~Queue1(); //destructor
  void push(int value);
  int dequeue();
  void enqueue(int n);
  int size();
  bool isEmpty();

};


#endif
