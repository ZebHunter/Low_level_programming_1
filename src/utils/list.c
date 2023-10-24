#include "../../include/utils/list.h"

listNode* createNode(uint64_t fileSize, uint64_t index)
{
	listNode* node = malloc(sizeof(listNode));
	if (node) {
		node->fileSize = fileSize;
		node->index = index;
		node->prev = NULL;
		node->next = NULL;
	}
	else {
		return NULL;
	}
}

void destroyList(sortList* list)
{
	listNode* node = list->front;
	while (node) {
		listNode* next = node->next;
		free(node);
		node = next;
	}

	free(list);
}
