#ifndef LLP1_DOCUMENT_H
#define LLP1_DOCUMENT_H

#include <stdint.h>
#include <stdio.h>
#include <malloc.h>
#include "op_status.h"

typedef struct document_header {
	//uint64_t signature;
	uint64_t fileSize;
	uint32_t firstPageOffset;
	uint64_t indexCount;
	uint64_t rootIndex;
}document_header;

struct file {
	FILE* f;
	document_header header;
	// list of indexes
};

enum index_type {
	ERROR_INDEX = 0,
	NEW_INDEX = 1,
	USING_INDEX = 2,
	DEAD_INDEX = 3
};

typedef struct block_index {
	uint64_t block_offset;
	uint8_t type;
} block_index;

struct file* createFile(const char* name);

struct file* loadFile(const char* name);

enum close_status closeFile(struct file* file);

enum write_status writeHeader(struct file* file);

block_index getIndex(struct file* file, uint64_t index_number);

enum write_status writeNewIndexes(struct file* file, uint64_t count);



#endif //LLP1_DOCUMENT_H
