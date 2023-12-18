#ifndef STRUCTURES_H
#define STRUCTURES_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Queue {
    int front;
    int back;
    int size;
    int count;
    int* container;
} Queue;

#ifdef __cplusplus
}
#endif

#endif