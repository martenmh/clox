//
// Created by marten on 29-03-20.
//

#ifndef TABLE_H
#define TABLE_H

#include "common.h"
#include "object.h"

// HashMap entry
typedef struct {
    ObjString *key;
    Value value;
} Entry;

// HashTable
typedef struct {
    int count;
    int capacity;
    Entry *entries;
} Table;

void initTable(Table *table);
void freeTable(Table *table);
bool tableSet(Table *table, ObjString *key, Value value);
bool tableGet(Table *table, ObjString *key, Value *value);
bool tableDelete(Table *table, ObjString *key);
void tableAddAll(Table *from, Table *to);   // For method inheritance
ObjString *tableFindString(Table *table, const char *chars, int length, uint32_t hash);

#endif //LOX_TABLE_H
