#include "_Sort.h"

/**
 * Copyright (c) 2023 by Joseph Samyn
 * This file contains all the implementations of basic integer
 * sorting algorithms. 
*/
void _swap(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}


int _partition(int arr[], int begin, int end)
{
  int x = arr[end];
  int i = begin;

  for (int j = i; j < end; j++)
  {
    if (arr[j] < x)
    {
      _swap(arr, i, j);
      i++;
    }
  }

  _swap(arr, i, end);
  return i;
}


void _quicksort(int* arr, int begin, int end)
{
  // Base condition
  if (begin >= end)
  {
    return;
  }

  int p = _partition(arr, begin, end);
  _quicksort(arr, begin, p - 1);
  _quicksort(arr, p + 1, end);
}

void sort(int* arr, int size, enum SortType type)
{
  switch(type)
  {
    case Quicksort:
    {
      int begin = 0;
      int end = size - 1;
      _quicksort(arr, begin, end);
    }
    default:
    {
      int begin = 0;
      int end = size - 1;
      _quicksort(arr, begin, end);
    }
  }
}