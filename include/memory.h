#ifndef MEMORY_H
#define MEMORY_H

#include "common.h"
#include <stdlib.h>

// Grow the capacity of the Chunk array by 2
#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)

// Syntactic sugar around reallocate()
#define GROW_ARRAY(previous, type, oldCount, count)\
    (type*)reallocate(previous, sizeof(type) * (oldCount),\
        sizeof(type) * (count))

// Pass a zero to reallocate() which frees the memory
#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

// Reallocate the memory size
void *reallocate(void* previous, size_t oldSize, size_t newSize);


#endif
