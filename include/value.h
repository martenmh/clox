#ifndef VALUE_H
#define VALUE_H

#include "common.h"
#include "memory.h"

typedef enum {
    VAL_BOOL,
    VAL_NIL,
    VAL_NUMBER
} ValueType;


typedef struct{
    ValueType type;
    union {
        bool boolean;
        double number;
    } as;
} Value;


#define IS_BOOL(value)      ((value).type == VAL_BOOL)
#define IS_NIL(value)       ((value).type == VAL_NIL)
#define IS_NUMBER(value)    ((value).type == VAL_NUMBER)

// Cast value (unsafe as we don't know if a given value is actually of the given type (first use the IS_x(value) macro)
#define AS_BOOL(value)      ((value).as.boolean)
#define AS_NUMBER(value)    ((value).as.number)

// Get Value struct from a value
#define BOOL_VAL(value)     ((Value){ VAL_BOOL,     { .boolean = value} })
#define NIL_VAL             ((Value){ VAL_NIL,      { .number = 0 } })
#define NUMBER_VAL(value)   ((Value){ VAL_NUMBER,   { .number = value } })

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
