#ifndef COMPILER_H
#define COMPILER_H

#include "common.h"
#include "scanner.h"    // structs: Token & TokenType, functions:  scanToken()
#include "chunk.h"      // structs: Chunk, functions: writeChunk()

#ifdef DEBUG_PRINT_CODE
#include "debug.h"
#endif

// Get the current chunk in use
static Chunk* currentChunk();
// Compile a chunk
bool compile(const char *source, Chunk *chunk);

// Support for number literals \
static void number();
// Support for grouping expressions with parentheses (expression)
static void grouping();
// Support for unary operands (eg. !bool, -number)
static void unary();

//
static uint8_t makeConstant(Value value);
//
static void emitConstant(Value value);

/** Front-end **/
// Create an error at the current token
static void errorAtCurrent(const char *message);
// Create an error and start panicMod
static void errorAt(Token *token, const char *message);
// Create an error for the previously consumed token
static void error(const char *message);
// advance a character (commented out or it would conflict with advance() in scanner.h) \
static void advance();
// Same as advance() but validates the type
static void consume(TokenType type, const char *message);

/** Middle end? **/
static void expression();

/** Backend **/
//
static void emitByte(uint8_t byte);
// Emit byte OP_RETURN
static void emitReturn();
//
static void endCompiler();
// Just for convenience when we need a opcode with a one byte operand
static void emitBytes(uint8_t byte1, uint8_t byte2);

#endif
