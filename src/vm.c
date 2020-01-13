#include "vm.h"

VM vm;


static void resetStack(){
    // Initialize stack pointer to the base of the stack
    vm.stackTop = vm.stack;
}

void push(Value value){
    *vm.stackTop = value;
    vm.stackTop++;  // Point to the next element
}
Value pop(){
    vm.stackTop--;
    return *vm.stackTop;
}

void initVM(){
    resetStack();
}

void freeVM(){

}

InterpretResult interpret(Chunk *chunk){
    // Initialize chunk
    vm.chunk = chunk;
    // Point to the first chunk
    vm.ip = vm.chunk->code;
    // Run the chunk
    return run();
}

static InterpretResult run(){
// Pop 2 values and push them together while doing some operation
#define BINARY_OP(op) \
    do { \
        double b = pop(); \
        double a = pop(); \
        push(a op b); \
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
            case OP_ADD: BINARY_OP(+); break;
            case OP_SUBTRACT: BINARY_OP(-); break;
            case OP_MULTIPLY: BINARY_OP(*); break;
            case OP_DIVIDE: BINARY_OP(/); break;
            // Read a constant and push it in the stack
            case OP_CONSTANT: {
                Value constant = READ_CONSTANT();
                push(constant);
                break;
            }
            // Negate the number at the top of the stack and push it back in
            case OP_NEGATE: push(-pop()); break;
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
