#ifndef __QUEUE3_H__
#define __QUEUE3_H__


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



class Queue3 {

  private:
    Node* front;
    Node* back;
    int numElements;
  public:
    Queue3();
    ~Queue3(); //destructor
    int dequeue();
    void enqueue(int n);
    int size();
    bool isEmpty;

};

#endif
