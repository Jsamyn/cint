#ifndef _QUEUE_H
#define _QUEUE_H

#include "Structures.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Create new queue
 * @param size the size of the queue
 * @return Pointer to Queue of the specified size
*/
Queue* _create(int size);

/**
 * @brief Get the front value of the queue
 * @param q the Queue to peak at
*/
int _peak(Queue* q);

/**
 * @brief Insert new value into queue
 * @param q The Queue to add value too
 * @param value the new value to be added to queue
*/
void _enqueue(Queue* q, int value);

/**
 * @brief Remove front value from queue
 * @param q The Queue to dequeue from 
*/
void _dequeue(Queue* q);

/**
 * @brief Resize the queue
 * @param q The queue to resize
 * @param new_size the new size of the queue
*/
void _resize(Queue* q, int new_size);


#endif 