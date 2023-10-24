#ifndef LLP1_PAGE_H
#define LLP1_PAGE_H


#include <stdint.h>
#include "../schema_manager/schema.h"
#include "op_status.h"

typedef struct {
    uint32_t timestamp;
    uint64_t offset;
} page_id;


typedef struct{
    uint64_t pageSize;
    uint64_t index;
    uint64_t brotherIndex;
    uint64_t childIndex;
    page_id id;
    char schemaName[13];
} page_header;

typedef struct{
    page_header header;
    schema* schema;
} page_t;

page_t* createPage();

enum read_status readPage();

enum write_status writePage(page_t* page);

void destroyPage(page_t* page);




#endif //LLP1_PAGE_H
