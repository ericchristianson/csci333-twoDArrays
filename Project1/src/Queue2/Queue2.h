#ifndef __QUEUE2_H__
#define __QUEUE2_H__


class Node {

  private:
    int value;
    Node* next;

  public:
    Node(int val);
    int getValue();
    Node* getNext();
    void setNext(Node* n);

};

class Queue2 {

  private:
    Node* front;
    Node* back;
    int numElements;
  public:
    Queue2();
    ~Queue2(); //destructor
    int dequeue();
    void enqueue(int n);
    int size();
    bool isEmpty();

};

#endif
