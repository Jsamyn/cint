#ifndef QUEUE_H
#define QUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Structures.h"

Queue* create(int size);

int peak(Queue* q);

void enqueue(Queue* q, int value);

void dequeue(Queue* q);

void resize(Queue* q, int new_size);

#ifdef __cplusplus
}
#endif

#endif 