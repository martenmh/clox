#ifndef DEBUG_H
#define DEBUG_H

#include <stdio.h>
#include "common.h"
#include "chunk.h"

static int constantInstruction(const char *name, Chunk *chunk, int offset);
static int simpleInstruction(const char *name, int offset);
void disassembleChunk(Chunk *chunk, const char *name);
int disassembleInstruction(Chunk *chunk, int offset);

#endif
