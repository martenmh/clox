#ifndef CHUNK_H
#define CHUNK_H

#include "common.h"
#include "memory.h"
#include "value.h"
#include <stdint.h>
#include <stdlib.h>

typedef enum {
    OP_CONSTANT,
    OP_NIL,
    OP_TRUE,
    OP_FALSE,
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_NOT,
    OP_EQUAL,
    OP_GREATER,
    OP_LESS,
    OP_NEGATE,
    OP_PRINT,
    OP_POP,
    OP_DEFINE_GLOBAL,
    OP_GET_GLOBAL,
    OP_SET_GLOBAL,
    OP_RETURN
} OpCode;

typedef struct {
    int count;
    int capacity;
    // Opcode
    uint8_t *code;
    // Constant data (section .data) which is known at compile time
    ValueArray constants;
    // Used for error message
    int *lines;
} Chunk;

// Initialize a chunk 
void initChunk(Chunk *chunk);
// Write an 8 bit unsigned number to the chunk array
void writeChunk(Chunk *chunk, uint8_t byte, int line);
// Free the memory chunk is pointing towards
void freeChunk(Chunk *chunk);
// Add a new constant value
int addConstant(Chunk *chunk, Value value);
#endif
