#ifndef QUEUE_H
#define QUEUE_H

#include "Structures.h"

Queue* create(int size);

int peak(Queue* q);

void enqueue(Queue* q, int value);

void dequeue(Queue* q);

void resize(Queue* q, int new_size);

#endif 