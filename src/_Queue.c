
#include "_Queue.h"

// TODO (joe): Look into a better way to create a struct with a pointer to a integer
Queue* _create(int size)
{  
  Queue* q = (Queue*) malloc(sizeof(q));
  q->back = -1;
  q->front = -1;
  q->size = size;
  q->count = 0;
  q->container = (int*)malloc(size * sizeof(int));
  return q;
}

int _peak(Queue* q)
{
  if (q->count == 0)
  {
    printf("Queue is empty.");
    return 0;
  }

  return q->container[q->front];
}

void _enqueue(Queue* q, int value)
{
  // Check if queue is full
  if (q->count == q->size - 1)
  {
    printf("Queue is full. Cannot insert new value.");
    return;
  }

  // Check if we need to wrap around to front of container
  q->back = q->back == q->size - 1 ? 0 : q->back + 1;

  q->container[q->back] = value;
  q->count++;
}