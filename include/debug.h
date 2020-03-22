#ifndef DEBUG_H
#define DEBUG_H

#include <stdio.h>
#include "common.h"
#include "chunk.h"

#define STR(x) #x
#define GET_STR(x) STR(x)

static int constantInstruction(const char *name, Chunk *chunk, int offset);
static int simpleInstruction(OpCode opCode, int offset);
void disassembleChunk(Chunk *chunk, const char *name);
int disassembleInstruction(Chunk *chunk, int offset);

#endif
