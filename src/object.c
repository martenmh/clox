//
// Created by marten on 24-03-20.
//
#include <stdio.h>
#include <string.h>

#include "memory.h"
#include "object.h"
#include "vm.h"
#include "table.h"

#define ALLOCATE_OBJ(type, objectType) \
    (type*)allocateObject(sizeof(type), objectType)

static Obj* allocateObject(size_t size, ObjType type){
    Obj *object = (Obj*)reallocate(NULL, 0, size);
    object->type = type;

    object->next = vm.objects;  // Point to the current head
    vm.objects = object;        // Set the head to this object
    return object;
}

static ObjString* allocateString(char *chars, int length, uint32_t hash){
    ObjString *string = ALLOCATE_OBJ(ObjString, OBJ_STRING);    // Set up the struct
    string->length = length;    // Set the values of the length
    string->chars = chars;      // and the string ptr
    string->hash = hash;

    tableSet(&vm.strings, string, NIL_VAL);

    return string;
}

static uint32_t hashString(const char *key, int length){
    uint32_t  hash = 2166136261u;

    for(int i = 0; i < length; i++){
        hash ^= key[i];
        hash *= 16777619;
    }

    return hash;
}

ObjString *takeString(char *chars, int length){
    uint32_t hash = hashString(chars, length);
    ObjString *interned = tableFindString(&vm.strings, chars, length, hash);
    if(interned != NULL){
        FREE_ARRAY(char,chars, length + 1);
        return interned;
    }
    return allocateString(chars, length, hash);;
}

void printObject(Value value){
    switch(OBJ_TYPE(value)){
        case OBJ_STRING:
            printf("%s", AS_CSTRING(value));
            break;
    }
}

ObjString *copyString(const char *chars, int length){
    uint32_t hash = hashString(chars, length);
    // If the string already exists, return a reference
    ObjString *interned = tableFindString(&vm.strings, chars, length, hash);
    if(interned != NULL) return interned;

    char *heapChars = ALLOCATE(char, length + 1);
    memcpy(heapChars, chars, length);   // Copy into char buffer
    heapChars[length] = '\0';   // Add null/zero terminator

    return allocateString(heapChars, length, hash);
}
