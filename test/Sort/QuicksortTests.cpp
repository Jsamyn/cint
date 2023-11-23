#include <gtest/gtest.h>
#include "Sort.h"

TEST(QuicksortTest, SortSuccessful)
{
  // Arrange 
  int size = 5;
  int arr[] = {6, 3, 4, 7, 2};

  // Act
  quicksort(arr, size);

  // Assert
  EXPECT_EQ(arr[0], 2);
  EXPECT_EQ(arr[1], 3);
  EXPECT_EQ(arr[2], 4);
  EXPECT_EQ(arr[3], 6);
  EXPECT_EQ(arr[4], 7);
}