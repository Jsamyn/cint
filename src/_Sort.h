#ifndef _SORT_H
#define _SORT_H

#ifdef __cplusplus
extern "C" {
#endif

enum SortType{
    Quicksort,
    Mergesort,
    CountingSort
};

void sort(int* arr, int size, enum SortType type);

void _quicksort(int* arr, int begin, int end);

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