#ifndef COMPILER_H
#define COMPILER_H

// It's there, but can't be in the header as it will conflict with the parser's advance()\
static void advance();
bool compile(const char *source, Chunk *chunk);
static void errorAtCurrent(const char *message);
static void errorAt(Token *token const char *message);
#endif
