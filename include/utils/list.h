#ifndef LAB1_LIST_H
#define LAB1_LIST_H

#include <stdint.h>
#include <malloc.h>

typedef struct listNode{

	uint64_t fileSize;
	uint64_t index;
	listNode* prev;
	listNode* next;

} listNode;

typedef struct {
	listNode* front;
	listNode* botton;
} sortList;

listNode* createNode(uint64_t fileSize, uint64_t index);

void destroyList(sortList* node);

void insertNode(listNode* node, sortList* list);



#endif LAB1_LIST_H