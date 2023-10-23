#ifndef LLP1_SCHEMA_H
#define LLP1_SCHEMA_H

#include "element.h"

typedef struct {
	element** elements;
	uint64_t size;
	char name[13];
} schema_t;


schema_t* createSchema(const char* name);

uint64_t calcSizeOfPage();

void destroySchema(schema_t* schema);


#endif //LLP1_SCHEMA_H
