#include "debug.h"


int disassembleInstruction(Chunk *chunk, int offset){
    printf("%04d ", offset);
    // Show from which line each instruction was compiled from
    // Print    | for any instruction that comes from 
    // the same source as the preceding one
    if(offset > 0 && chunk->lines[offset] == chunk->lines[offset -1]){
        printf("    | ");
    } else {
        // Else, just print the line
        printf("%4d ", chunk->lines[offset]);
    }

    // Get opcode
    uint8_t instruction = chunk->code[offset];

    switch(instruction){
        case OP_ADD:
            return simpleInstruction("OP_ADD", offset);
        case OP_SUBTRACT:
            return simpleInstruction("OP_SUBTRACT", offset);
        case OP_MULTIPLY:
            return simpleInstruction("OP_MULTIPLY", offset);
        case OP_DIVIDE:
            return simpleInstruction("OP_DIVIDE", offset);
        case OP_CONSTANT:
            return constantInstruction("OP_CONSTANT", chunk, offset);
        case OP_NEGATE:
            return simpleInstruction("OP_NEGATE", offset);
        case OP_RETURN:
            return simpleInstruction("OP_RETURN", offset);
        default:
            printf("Unknown opcode %d\n", instruction);
            return offset + 1;
    }
}

static int constantInstruction(const char *name, Chunk *chunk, int offset){
    uint8_t constant = chunk->code[offset + 1];
    printf("%-16s %4d '", name, constant);
    printValue(chunk->constants.values[constant]);
    printf("'\n");
    // One for the opcode and one for the operand
    return offset + 2;
}

static int simpleInstruction(const char *name, int offset){
    printf("%s\n", name);
    return offset + 1;
}

void disassembleChunk(Chunk *chunk, const char *name){
    printf("== %s ==\n", name);
    for(int offset = 0; offset < chunk->count;){
        // Let disassembleInstruction handle the offset incrementing 
        // because chunks can have different sizes
        offset = disassembleInstruction(chunk, offset);
    }
}

