#ifndef VM_H
#define VM_H

#include "common.h"
#include "chunk.h"
#include "value.h"
#include "debug.h"
#include "compiler.h"
#include <stdio.h>

#define STACK_MAX 256

// Stack based virtual machine
typedef struct {
    // chunk[ip] will result in the current instruction
    // Instruction array
    Chunk *chunk;
    // Instruction pointer
    uint8_t *ip;
    // Define a stack
    Value stack[STACK_MAX];
    // SP (stack pointer)
    Value *stackTop;
} VM;

// Results
typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

// Stack operations
static void resetStack();
void push(Value value);
Value pop();

// VM operations:
void initVM();
void freeVM();
// Interpret the tokens and turn them into bytecode
InterpretResult interpret(const char *source);

// Most important function, runs the bytecode and execute it
static InterpretResult run();
#endif
