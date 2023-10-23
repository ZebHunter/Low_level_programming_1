#include "../../include/schema_manager/schema.h"

schema_t* createSchema(const char* name) {
	if (name && strlen(name) <= 12) {

		schema_t* schema = malloc(sizeof(schema_t));
		
		if (schema) {
			schema->elements = NULL;
			schema->size = 0;
			strcpy(schema->name, name);

			return schema;
		}
	}

	return NULL;
}


uint64_t calcSizeOfPage() {

}

void destroySchema(schema_t* schema) {

}