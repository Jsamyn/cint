#ifndef _SORT_H
#define _SORT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include "Define.h"


/**
 * @brief Sort an integer array using the quicksort algorithm
 * @param arr integer array to sort
 * @param begin starting index of subarray
 * @param end ending index of subarray 
*/
void _quicksort(int* arr, int begin, int end);

/**
 * @brief Sort an integer array using the mergesort algorithm
 * @param arr the integer array to sort
 * @param begin the starting index of the array
 * @param end the ending index of the array 
*/
void _mergesort(int* arr, int begin, int end);

/**
 * @brief Determine maximum element in the array 
 * @param arr the array to search for max
 * @param size the number of elements in arr
 * @return max element 
*/
int _max(int* arr, int size);

/**
 * @brief Sort an integer array using counting sort
 * @param arr the array to sort
 * @param B array to place sorted elements
 * @param size the number of elements in arr
*/
void _countingSort(int* arr, int* B, int size);

/**
 * @brief Merge two subarrays into a single sorted subarray 
 * @param arr integer array to merge and sort
 * @param b beginning index of first subarray 
 * @param m middle index
 * @param e ending index
*/
void _merge(int* arr, int b, int m, int e);

/**
 * @brief Find the partition index for quicksort
 * @param arr the array to find partition in 
 * @param begin starting index of subarray 
 * @param end ending index of subarray 
*/
int _partition(int* arr, int s, int e);

/**
 * @brief Swap elements i and j in the array 
 * @param arr array to perform swap
 * @param i first index
 * @param j second index
*/
void _swap(int* arr, int i, int j);


#ifdef __cplusplus
}
#endif

#endif