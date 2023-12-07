#ifndef STRUCTURES_H
#define STRUCTURES_H

typedef struct Queue {
    int front;
    int back;
    int size;
    int count;
    int* container;
} Queue;

#endif