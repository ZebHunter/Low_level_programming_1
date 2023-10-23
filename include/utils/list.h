#ifndef LAB1_LIST_H
#define LAB1_LIST_H

#include <stdint.h>

typedef struct{

	uint64_t fileSize;
	uint64_t index;
	listNode* prev;
	listNode* next;

} listNode;




#endif LAB1_LIST_H