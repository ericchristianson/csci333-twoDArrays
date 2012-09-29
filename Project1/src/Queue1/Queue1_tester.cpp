#include "Queue1.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Queue1* queue = new Queue1(10);
  for(int i=0; i<15; ++i){
    queue -> enqueue(i);
  }

  cout << queue->size() << endl;

  for(int i= 0; i<15; ++i){
    cout << queue->size() << endl;
  }

  cout << queue->size() << endl;
  delete queue;
  return 0;
}
