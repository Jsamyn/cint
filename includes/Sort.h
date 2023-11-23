#ifndef SORT_H
#define SORT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
/**
 * @brief Sort an integer array using quicksort
 * @param arr integer array to sort
 * @param size number of elements in array 
*/
void quicksort(int* arr, int size);

#ifdef __cplusplus
}
#endif

#endif