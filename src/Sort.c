#include "Sort.h"
#include "_Sort.h"

void sort(int* arr, int size, enum SortType type)
{
  switch(type)
  {
    case Quicksort:
    {
      int begin = 0;
      int end = size - 1;
      _quicksort(arr, begin, end);
      break;
    }
    case Mergesort:
    {
        int begin = 0;
        int end = size - 1;
        _mergesort(arr, begin, end);
        break;
    }
    default:
    {
      int begin = 0;
      int end = size - 1;
      _quicksort(arr, begin, end);
      break;
    }
  }
}

