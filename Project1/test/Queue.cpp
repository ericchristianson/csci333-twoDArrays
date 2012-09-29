#include "gtest/gtest.h"
#include "../src/Queue1/Queue1.h"
#include "../src/Queue2/Queue2.h"
#include "../src/Queue3/Queue3.h"

TEST(queue1Test, enqueue){
  Queue1* q = new Queue1(10);
  for(int i=0; i<30; ++i){
    q->enqueue(i);
  }

  EXPECT_EQ(30, q->size());
  EXPECT_EQ(20, q->dequeue());
  delete q;
}


TEST(queue2Test, enqueue) {
  Queue2* q2 = new Queue2();
  q2->enqueue(6);

  EXPECT_EQ(1, q2->size());
  EXPECT_EQ(6, q2->dequeue());
  delete q2;
}

TEST(queue3Test, enqueue) {
  Queue3* q3 = new Queue3();
  q3-> enqueue(13);

  EXPECT_EQ(1, q3->size());
  EXPECT_EQ(13, q3->dequeue());
  delete q3;

}
