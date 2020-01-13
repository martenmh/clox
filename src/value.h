#ifndef VALUE_H
#define VALUE_H

#include "common.h"
#include "memory.h"

typedef double Value;

// Create a constant pool array of values, 
// we'll load these by index in an array to a register.
typedef struct {
    int capacity;
    int count;
    Value *values;
} ValueArray;

void printValue(Value value);
void initValueArray(ValueArray *array);
void writeValueArray(ValueArray *array, Value value);
void freeValueArray(ValueArray *array);

#endif
