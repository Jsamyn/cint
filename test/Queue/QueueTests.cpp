#include <gtest/gtest.h>
#include "Queue.h"
#include "Structures.h"

TEST(QueueTest, QueueInitializesProperly)
{
  // Arrange
  int size = 5;
  Queue* q = create(size);

  // Act

  // Assert
  EXPECT_EQ(q->back, -1);
  EXPECT_EQ(q->front, -1);
  EXPECT_EQ(q->size, size);
  EXPECT_EQ(q->count, 0);
  EXPECT_NE(q->container, nullptr);
}