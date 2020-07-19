#ifndef VALUE_H
#define VALUE_H

#include "common.h"
#include "memory.h"

typedef struct sObj Obj;
typedef struct sObjString ObjString;

typedef enum {
    VAL_BOOL,
    VAL_NIL,
    VAL_NUMBER,
    VAL_OBJ
} ValueType;


typedef struct{
    ValueType type;
    union {
        bool boolean;
        double number;
        Obj *obj;
    } as;
} Value;

#define IS_BOOL(value)      ((value).type == VAL_BOOL)
#define IS_NIL(value)       ((value).type == VAL_NIL)
#define IS_NUMBER(value)    ((value).type == VAL_NUMBER)
#define IS_OBJ(value)       ((value).type == VAL_OBJ)

// Cast value (unsafe as we don't know if a given value is actually of the given type (first use the IS_x(value) macro)
#define AS_BOOL(value)      ((value).as.boolean)
#define AS_NUMBER(value)    ((value).as.number)
#define AS_OBJ(value)       ((value).as.obj)

// Get Value struct from a value
#define BOOL_VAL(value)     ((Value){ VAL_BOOL,     { .boolean = value } })
#define NIL_VAL             ((Value){ VAL_NIL,      { .number = 0 } })
#define NUMBER_VAL(value)   ((Value){ VAL_NUMBER,   { .number = value } })
#define OBJ_VAL(value)      ((Value){ VAL_OBJ,      { .obj = (Obj*)value } })

// Create a constant pool array of values, 
// we'll load these by index in an array to a register.
typedef struct {
    int capacity;
    int count;
    Value *values;
} ValueArray;

bool valuesEqual(Value a, Value b);
void printValue(Value value);
void initValueArray(ValueArray *array);
void writeValueArray(ValueArray *array, Value value);
void freeValueArray(ValueArray *array);

#endif
