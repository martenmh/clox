//
// Created by marten on 22-03-20.
//

#ifndef OBJECT_H
#define OBJECT_H

#include "common.h"
#include "value.h"

#define OBJ_TYPE(value) (AS_OBJ(value)->type)
#define IS_STRING(value)    isObjType(value, OBJ_STRING)

#define AS_STRING(value)    ((ObjString*)AS_OBJ(value))
#define AS_CSTRING(value)    (((ObjString*)AS_OBJ(value))->chars)


typedef enum {
    OBJ_STRING
} ObjType;

// Single 'intrusive' (meaning it points to an instance of itself (sObj in this case) as the next node) linked list
struct sObj {
    ObjType type;
    struct sObj *next;
};

struct sObjString {
    Obj obj;    // enum of the Object type
    int length;
    char *chars;
    uint32_t hash;  // Cache the hash so we don't have to hash it every time
};

ObjString *takeString(char *chars, int length);
ObjString *copyString(const char *chars, int length);
void printObject(Value value);

static inline bool isObjType(Value value, ObjType type){
    return IS_OBJ(value) && AS_OBJ(value)->type == type;
}
#endif //LOX_OBJECT_H
