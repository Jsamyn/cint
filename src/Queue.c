#include "Queue.h"
#include "_Queue.h"

Queue* create(int size)
{
  return _create(size);
}

int peak(Queue* q)
{
  return _peak(q);
}

void enqueue(Queue* q, int value)
{
  _enqueue(q, value);
}

void dequeue(Queue* q)
{
  _dequeue(q);
}

void resize(Queue* q, int new_size)
{
  _resize(q, new_size);
}