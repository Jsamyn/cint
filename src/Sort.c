#include "Sort.h"

/**
 * Copyright (c) 2023 by Joseph Samyn
 * This file contains all the implementations of basic integer
 * sorting algorithms. 
*/

/**
 * @brief Swap elements i and j in the array 
 * @param arr array to perform swap
 * @param i first index
 * @param j second index
*/
void _swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

/**
 * @brief Find the partition index for quicksort
 * @param arr the array to find partition in 
 * @param begin starting index of subarray 
 * @param end ending index of subarray 
*/
int _partition(int arr[], int begin, int end)
{
  int x = arr[end];
  int i = begin;

  for (int j = i; j < end; j++)
  {
    if (arr[j] < x)
    {
      swap(arr, i, j);
      i++;
    }
  }

  i++;
  _swap(arr, i, end);
  return i;
}

/**
 * @brief Sort array using recursive quicksort method
 * @param arr the array to sort
 * @param begin the start of the sub array
 * @param end the end of the subarray 
*/
void _q_sort(int arr[], int begin, int end)
{
  // Base condition
  if (begin >= end)
  {
    return;
  }

  int p = partition(arr, begin, end);
  _q_sort(arr, begin, p - 1);
  _q_sort(arr, p + 1, end);
}

void quicksort(int arr[], int size)
{
  int begin = 0;
  int end = size - 1;
  _q_sort(arr, begin, end);
}