#include "Queue2.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Queue2* queue = new Queue2();
  queue->enqueue(7);
  queue->enqueue(10);
  queue->enqueue(18);

  cout << queue->size() << endl;
  cout << queue->dequeue() << endl;
  cout << queue->size() << endl;
  cout << queue->dequeue() << endl;
  cout << queue->size() << endl; 
  
  delete queue;
  return 0;
}
