#ifndef SORT_H
#define SORT_H

#ifdef __cplusplus
extern "C" {
#endif

enum SortType{
    Quicksort,
    Mergesort,
    CountingSort
};

#include <stdio.h>

/**
 * @brief Sort an integer array 
 * @param arr integer array to sort
 * @param size the number of elements in array 
 * @param type the sorting algorithm to use, default is quicksort 
*/
void sort(int* arr, int size, enum SortType type);

#ifdef __cplusplus
}
#endif

#endif