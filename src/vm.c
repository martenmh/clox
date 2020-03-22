#include "../include/vm.h"
#include "../include/compiler.h"
#include <stdarg.h>

VM vm;

static void resetStack(){
    // Initialize stack pointer to the base of the stack
    vm.stackTop = vm.stack;
}

static void runtimeError(const char *format, ...){
    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
    fputc("\n", stderr);

    size_t instruction = vm.ip - vm.chunk->code - 1;
    int line = vm.chunk->lines[instruction];
    fprintf(stderr, "[line %d] in script\n", line);

    resetStack();
}

void push(Value value){
    *vm.stackTop = value;
    vm.stackTop++;  // Point to the next element
}
Value pop(){
    vm.stackTop--;
    return *vm.stackTop;
}

static Value peek(int distance){
    return vm.stackTop[-1 - distance];
}

static bool isFalsey(Value value){
    return IS_NIL(value) || (IS_BOOL(value) && !AS_BOOL(value));
}

void initVM(){
    resetStack();
}

void freeVM(){

}

InterpretResult interpret(const char *source){
    Chunk chunk;
    initChunk(&chunk);

    if(!compile(source, &chunk)){
        freeChunk(&chunk);
                return INTERPRET_COMPILE_ERROR;
    }

    vm.chunk = &chunk;
    vm.ip = vm.chunk->code;

    InterpretResult result = run();
    freeChunk(&chunk);
    return result;
}

static InterpretResult run(){
// Pop 2 values and push them together while doing some operation
#define BINARY_OP(valueType ,op) \
    do { \
        if (!IS_NUMBER(peek(0)) || !IS_NUMBER(peek(1))){ \
        runtimeError("Operands must be numbers."); \
        return INTERPRET_RUNTIME_ERROR; \
        }\
        \
        double b = AS_NUMBER(pop()); \
        double a = AS_NUMBER(pop()); \
        push(valueType(a op b)); \
    } while(false)

// Read byte and advance ip
#define READ_BYTE() (*vm.ip++)
// Read a constant value (and advance ip)
#define READ_CONSTANT() (vm.chunk->constants.values[READ_BYTE()])

    // Read and execute a bytecode
    for(;;){
#ifdef DEBUG_TRACE_EXECUTION
        // When tracing, print the contents of the stack
        printf("         ");
        // Loop through the stack
        for(Value *slot = vm.stack; slot < vm.stackTop; slot++){
            printf("[ ");
            printValue(*slot);
            printf(" ]");
        }
        printf("\n");
        // Offset = cur instruction pos - first instruction pos
        disassembleInstruction(vm.chunk, (int)(vm.ip - vm.chunk->code));
#endif
        // For each opcode we need to find C code that 
        // implements the instruction's semantics.
        // (AKA. "decoding" / "dispatching" the instruction.)
        uint8_t instruction;
        switch(instruction = READ_BYTE()){
            case OP_NIL: push(NIL_VAL); break;
            case OP_TRUE: push(BOOL_VAL(true)); break;
            case OP_FALSE: push(BOOL_VAL(false)); break;
            case OP_ADD: BINARY_OP(NUMBER_VAL, +); break;
            case OP_SUBTRACT: BINARY_OP(NUMBER_VAL, -); break;
            case OP_MULTIPLY: BINARY_OP(NUMBER_VAL, *); break;
            case OP_DIVIDE: BINARY_OP(NUMBER_VAL, /); break;
            case OP_NOT:
                push(BOOL_VAL(isFalsey(pop())));
                break;
            // Read a constant and push it in the stack
            case OP_CONSTANT: {
                Value constant = READ_CONSTANT();
                push(constant);
                break;
            }
            // Negate the number at the top of the stack and push it back in
            case OP_NEGATE:
                if(!IS_NUMBER(peek(0))){
                    runtimeError("Operand must be a number.");
                    return INTERPRET_RUNTIME_ERROR;
                }

                push(NUMBER_VAL(-AS_NUMBER(pop())));
                break;
            // Return from a function
            case OP_RETURN: {
                printValue(pop());
                printf("\n");
                return INTERPRET_OK;
            }
        }
    }

// Undefine all macros
#undef READ_CONSTANT
#undef READ_BYTE
#undef BINARY_OP
}
