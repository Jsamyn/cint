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


int _partition(int* arr, int begin, int end)
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

void _mergesort(int* arr, int begin, int end)
{
  if (begin >= end)
  {
    return;
  }

  int m = begin + (end - begin)/2;
  _mergesort(arr, begin, m);
  _mergesort(arr, m + 1, end);
  _merge(arr, begin, m, end);
}

void _merge(int* arr, int b, int m, int e)
{
  int n1 = m - b;
  int n2 = e - (m + 1);
  int* arr1 = (int*)calloc(n1, sizeof(int));
  int* arr2 = (int*)calloc(n2, sizeof(int));

  // Fill two subarrays 
  for (int i = 0; i <= n1; i++) 
  {
    arr1[i] = arr[b + i];
  }

  for (int i = 0; i <= n2; i++)
  {
    arr2[i] = arr[m + 1 + i];
  }

  // Sort
  int i = 0;
  int j = 0;
  int a = b;

  while(i <= n1 && j <= n2)
  {
    if (arr1[i] < arr2[j])
    {
      arr[a] = arr1[i];
      i++;
    }
    else 
    {
      arr[a] = arr2[j];
      j++;
    }

    a++;
  }

  // Move remaining elements
  while(i <= n1)
  {
    arr[a] = arr1[i];
    i++;
    a++;
  }

  while(j <= n2)
  {
    arr[a] = arr2[j];
    j++;
    a++;
  }

  // Free memory 
  free(arr1);
  free(arr2);
}
