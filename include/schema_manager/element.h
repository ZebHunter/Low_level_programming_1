#ifndef LLP1_TYPES_H
#define LLP1_TYPES_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum fields{
    TYPE_INTEGER = 0,
    TYPE_FLOAT = 1,
    TYPE_STRING = 2,
    TYPE_BOOLEAN = 3,
    TYPE_DEFAULT = 4
} fields_t;

typedef struct string{
    uint64_t size;
    char* data;
} string_t;

typedef struct {
    fields_t type;
    char key[13];
    union{
        int32_t intValue;
        double floatValue;
        string_t stringValue;
        bool booleanValue;
    };
} element;

element* createElement(const char* key, element el);

element* readElement();

enum write_status writeElement();

int updateElement();

void destroyElement(element* el);


#endif //LLP1_TYPES_H
