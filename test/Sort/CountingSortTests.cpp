#include <gtest/gtest.h>
#include "Sort.h"

TEST(CountingSortTests, SortSuccessful)
{
    // Arrange 
    int size = 6;
    int arr[] = {6, 3, 4, 2, 7, 2};
    int* A = arr;

    // Act
    sort(A, size, CountingSort);

    // Assert
    EXPECT_EQ(A[0], 2);
    EXPECT_EQ(A[1], 2);
    EXPECT_EQ(A[2], 3);
    EXPECT_EQ(A[3], 4);
    EXPECT_EQ(A[4], 6);
    EXPECT_EQ(A[5], 7);
}