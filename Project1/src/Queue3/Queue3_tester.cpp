#include "Queue3.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Queue3 queue = Queue3();
  queue.enqueue(7);
  queue.enqueue(13);
  queue.enqueue(17);

  cout << queue.size() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.size() << endl;
  cout << queue.dequeue() << endl;
  cout << queue.size() <<endl;

  return 0;
}
