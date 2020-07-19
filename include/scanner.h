#ifndef SCANNER_H
#define SCANNER_H

#include "common.h"

typedef enum{
  // Single-character tokens.                         
  TOKEN_LEFT_PAREN, TOKEN_RIGHT_PAREN,
  TOKEN_LEFT_BRACE, TOKEN_RIGHT_BRACE,
  TOKEN_COMMA, TOKEN_DOT, TOKEN_MINUS, TOKEN_PLUS,
  TOKEN_SEMICOLON, TOKEN_SLASH, TOKEN_STAR,

  // One or two character tokens.
  TOKEN_BANG, TOKEN_BANG_EQUAL,
  TOKEN_EQUAL, TOKEN_EQUAL_EQUAL,
  TOKEN_GREATER, TOKEN_GREATER_EQUAL,
  TOKEN_LESS, TOKEN_LESS_EQUAL,

  // Literals.                                        
  TOKEN_IDENTIFIER, TOKEN_STRING, TOKEN_NUMBER,

  // Keywords.                                        
  TOKEN_AND, TOKEN_CLASS, TOKEN_ELSE, TOKEN_FALSE,
  TOKEN_FOR, TOKEN_FUN, TOKEN_IF, TOKEN_NIL, TOKEN_OR,
  TOKEN_PRINT, TOKEN_RETURN, TOKEN_SUPER, TOKEN_THIS,
  TOKEN_TRUE, TOKEN_VAR, TOKEN_WHILE,

  TOKEN_ERROR, // Fires when there is an error so the compiler can start error recovery
  TOKEN_EOF
} TokenType;

typedef struct {
    TokenType type;
    const char *start;
    int length;
    int line;
} Token;

// Helper functions
static Token makeToken(TokenType type); // Create an error from a type
static Token errorToken(const char *message);   // Get an error token from a message \
static Token string();      // Create a string token    \
static Token number();      // Create a number token
static Token identifier();  // Create a identifier token
static TokenType identifierType(); // Check if a token is a keyword or identifier
static TokenType checkKeyword(int start, int length, const char *rest, TokenType type);
static bool isAtEnd();  // Check if scanner is at the end of a file \
static char advance();  // Advance the scanner by a character \
static bool match(char expected);   // Check if expected character matches next character
static void skipWhitespace();   // Self-explanatory \
static char peek(); // Get the next character without advancing the scanner
static char peekNext(); // Get the next next character
static bool isAlpha(char c); // Check if char is an alphanumerical character
static bool isDigit(char c); // check if char is a digit

void initScanner(const char *source);
// Go through the text and return a token
Token scanToken();

#endif
